/*
 * Copyright 2025, Cypress Semiconductor Corporation (an Infineon company)
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "whd_chip_constants.h"
#include "whd_wlioctl.h"
#include "whd_int.h"
#include "whd_types_int.h"
#include "bus_protocols/whd_chip_reg.h"

typedef whd_result_t (*chip_var_getter_t)(uint16_t wlan_chip_id, uint32_t* val);
static whd_result_t get_socsram_base_address_plain(uint16_t wlan_chip_id, uint32_t* addr);
static whd_result_t get_socsram_base_address_wrapper(uint16_t wlan_chip_id, uint32_t* addr);

/* Indexed by chip_var_t, slot 0 is unused */
static const chip_var_getter_t chip_var_getters[NVRAM_DNLD_ADDR + 1] = {
    [ARM_CORE_BASE_ADDRESS]          = get_arm_core_base_address,
    [SOCSRAM_BASE_ADDRESS]           = get_socsram_base_address_plain,
    [SOCSRAM_WRAPPER_BASE_ADDRESS]   = get_socsram_base_address_wrapper,
    [SDIOD_CORE_BASE_ADDRESS]        = get_sdiod_core_base_address,
    [PMU_BASE_ADDRESS]               = get_pmu_base_address,
    [CHIP_RAM_SIZE]                  = get_chip_ram_size,
    [ATCM_RAM_BASE_ADDRESS]          = get_atcm_ram_base_address,
    [SOCRAM_SRMEM_SIZE]              = get_socsram_srmem_size,
    [CHANSPEC_BAND_MASK]             = get_wl_chanspec_band_mask,
    [CHANSPEC_BAND_2G]               = get_wl_chanspec_band_2G,
    [CHANSPEC_BAND_5G]               = get_wl_chanspec_band_5G,
    [CHANSPEC_BAND_6G]               = get_wl_chanspec_band_6G,
    [CHANSPEC_BAND_SHIFT]            = get_wl_chanspec_band_shift,
    [CHANSPEC_BW_10]                 = get_wl_chanspec_bw_10,
    [CHANSPEC_BW_20]                 = get_wl_chanspec_bw_20,
    [CHANSPEC_BW_40]                 = get_wl_chanspec_bw_40,
    [CHANSPEC_BW_80]                 = get_wl_chanspec_bw_80,
    [CHANSPEC_BW_160]                = get_wl_chanspec_bw_160,
    [CHANSPEC_BW_MASK]               = get_wl_chanspec_bw_mask,
    [CHANSPEC_BW_SHIFT]              = get_wl_chanspec_bw_shift,
    [CHANSPEC_CTL_SB_NONE]           = get_wl_chanspec_ctl_sb_none,
    [CHANSPEC_CTL_SB_LLL]            = get_wl_chanspec_ctl_sb_LLL,
    [CHANSPEC_CTL_SB_LLU]            = get_wl_chanspec_ctl_sb_LLU,
    [CHANSPEC_CTL_SB_LUL]            = get_wl_chanspec_ctl_sb_LUL,
    [CHANSPEC_CTL_SB_LUU]            = get_wl_chanspec_ctl_sb_LUU,
    [CHANSPEC_CTL_SB_ULL]            = get_wl_chanspec_ctl_sb_ULL,
    [CHANSPEC_CTL_SB_ULU]            = get_wl_chanspec_ctl_sb_ULU,
    [CHANSPEC_CTL_SB_UUL]            = get_wl_chanspec_ctl_sb_UUL,
    [CHANSPEC_CTL_SB_UUU]            = get_wl_chanspec_ctl_sb_UUU,
    [CHANSPEC_CTL_SB_MASK]           = get_wl_chanspec_ctl_sb_mask,
    [NVRAM_DNLD_ADDR]                = get_nvram_dwnld_start_address
};

/******************************************************
 *               Function Definitions
 ******************************************************/
uint32_t whd_chip_set_chip_id(whd_driver_t driver, uint16_t id) {
    driver->chip_info.chip_id = id;

    return (0);
}

uint16_t whd_chip_get_chip_id(whd_driver_t driver) {
    return driver->chip_info.chip_id;
}

uint32_t whd_chip_set_chiprev_id(whd_driver_t driver, uint8_t id) {
    driver->chip_info.chiprev_id = id;

    return (0);
}

uint8_t whd_chip_get_chiprev_id(whd_driver_t driver) {
    return driver->chip_info.chiprev_id;
}

/* Older chips (43362, 4334, 43340, 43342) use the legacy chanspec bit layout */
static whd_bool_t whd_is_legacy_chanspec_chip(uint16_t wlan_chip_id) {
    whd_bool_t is_legacy = WHD_FALSE;

    if ((wlan_chip_id == 43362) || (wlan_chip_id == 4334) ||
        (wlan_chip_id == 43340) || (wlan_chip_id == 43342)) {
        is_legacy = WHD_TRUE;
    }

    return (is_legacy);
}

whd_result_t whd_chip_get_chanspec_ctl_channel_num(whd_driver_t driver, uint16_t chanspec, uint16_t* ctrl_ch_num) {
    uint16_t wlan_chip_id = whd_chip_get_chip_id(driver);
    uint16_t bw = chanspec & get_whd_var(driver, CHANSPEC_BW_MASK);
    uint16_t sb = chanspec & get_whd_var(driver, CHANSPEC_CTL_SB_MASK);
    uint16_t ctrl_ch = CHSPEC_CHANNEL(chanspec);

    /* Error paths keep the unadjusted channel, so store it first and the adjusted one once at the end */
    *ctrl_ch_num = ctrl_ch;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        return (WHD_SUCCESS);
    }
    else {
        if (bw == get_whd_var(driver, CHANSPEC_BW_20)) {
            return (WHD_SUCCESS);
        }
        else if (bw == get_whd_var(driver, CHANSPEC_BW_40)) {
            if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_L)) {
                ctrl_ch -= CH_10MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_U)) {
                ctrl_ch += CH_10MHZ_APART;
            }
            else {
                WPRINT_WHD_ERROR(("Error: Invalid chanspec 0x%04x\n", chanspec));
                return (WHD_BADARG);
            }
        }
        else if (bw == get_whd_var(driver, CHANSPEC_BW_80)) {
            if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_LL)) {
                ctrl_ch -= CH_30MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_LU)) {
                ctrl_ch -= CH_10MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_UL)) {
                ctrl_ch += CH_10MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_UU)) {
                ctrl_ch += CH_30MHZ_APART;
            }
            else {
                WPRINT_WHD_ERROR(("Error: Invalid chanspec 0x%04x\n", chanspec));
                return (WHD_BADARG);
            }
        }
        else if (bw == get_whd_var(driver, CHANSPEC_BW_160)) {
            if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_LLL)) {
                ctrl_ch -= CH_70MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_LLU)) {
                ctrl_ch -= CH_50MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_LUL)) {
                ctrl_ch -= CH_30MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_LUU)) {
                ctrl_ch -= CH_10MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_ULL)) {
                ctrl_ch += CH_10MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_ULU)) {
                ctrl_ch += CH_30MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_UUL)) {
                ctrl_ch += CH_50MHZ_APART;
            }
            else if (sb == get_whd_var(driver, CHANSPEC_CTL_SB_UUU)) {
                ctrl_ch += CH_70MHZ_APART;
            }
            else {
                WPRINT_WHD_ERROR(("Error: Invalid chanspec 0x%04x\n", chanspec));
                return (WHD_BADARG);
            }
        }
        else {
            WPRINT_WHD_ERROR(("Error: Invalid chanspec 0x%04x\n", chanspec));
            return (WHD_BADARG);
        }
    }

    *ctrl_ch_num = ctrl_ch;

    return (WHD_SUCCESS);
}

static whd_result_t get_socsram_base_address_plain(uint16_t wlan_chip_id, uint32_t* addr) {
    return (get_socsram_base_address(wlan_chip_id, addr, WHD_FALSE));
}

static whd_result_t get_socsram_base_address_wrapper(uint16_t wlan_chip_id, uint32_t* addr) {
    return (get_socsram_base_address(wlan_chip_id, addr, WHD_TRUE));
}

uint32_t get_whd_var(whd_driver_t driver, chip_var_t var) {
    uint32_t val = 0;
    whd_result_t result;
    chip_var_getter_t getter = NULL;
    uint16_t wlan_chip_id = whd_chip_get_chip_id(driver);

    if ((var >= ARM_CORE_BASE_ADDRESS) && (var <= NVRAM_DNLD_ADDR)) {
        getter = chip_var_getters[var];
    }

    if (getter != NULL) {
        result = getter(wlan_chip_id, &val);

        /* The error code must not leak out as a value, e.g. as a base address */
        if (result != WHD_SUCCESS) {
            WPRINT_WHD_ERROR(("%s: var %d not available for chip %u, result = %u\n", __func__, (int)var,
                              (unsigned int)wlan_chip_id, (unsigned int)result));
            val = 0;
        }
    }

    return (val);
}

whd_result_t get_arm_core_base_address(uint16_t wlan_chip_id, uint32_t* addr) {
    switch (wlan_chip_id) {
        case 0x4373 :
        case 55560 :
        case 55500 :
        case 55530 :
            *addr = 0x18002000 + WRAPPER_REGISTER_OFFSET;
            break;

        case 43012 :
        case 43022 :
        case 43430 :
        case 43439 :
            *addr = 0x18003000 + WRAPPER_REGISTER_OFFSET;
            break;

        case 43909 :
        case 43907 :
        case 54907 :
            *addr = 0x18011000 + WRAPPER_REGISTER_OFFSET;
            break;

        default :
            return (WHD_BADARG);
    }

    return (WHD_SUCCESS);
}

whd_result_t get_socsram_base_address(uint16_t wlan_chip_id, uint32_t* addr, whd_bool_t wrapper) {
    uint32_t offset = 0;

    if (wrapper) {
        offset = WRAPPER_REGISTER_OFFSET;
    }
    switch (wlan_chip_id) {
        case 43012 :
        case 43022 :
        case 43430 :
        case 43439 :
            *addr = 0x18004000 + offset;
            break;

        default :
            return (WHD_BADARG);
    }

    return (WHD_SUCCESS);
}

whd_result_t get_sdiod_core_base_address(uint16_t wlan_chip_id, uint32_t* addr) {
    switch (wlan_chip_id) {
        case 55560 :
            *addr = 0x18004000;
            break;

        case 55500 :
        case 55530 :
            *addr = 0x18003000;
            break;

        case 0x4373 :
            *addr = 0x18005000;
            break;

        case 43012 :
        case 43022 :
        case 43430 :
        case 43439 :
            *addr = 0x18002000;
            break;

        default :
            return (WHD_BADARG);
    }

    return (WHD_SUCCESS);
}

whd_result_t get_pmu_base_address(uint16_t wlan_chip_id, uint32_t* addr) {
    switch (wlan_chip_id) {
        case 0x4373 :
        case 43430 :
        case 43439 :
            *addr = CHIPCOMMON_BASE_ADDRESS;
            break;

        case 43012 :
        case 43022 :
        case 55560 :
        case 55500 :
        case 55530 :
            *addr = 0x18012000;
            break;

        case 43909 :
        case 43907 :
        case 54907 :
            *addr = 0x18011000;
            break;

        default :
            return (WHD_BADARG);
    }

    return (WHD_SUCCESS);
}

whd_result_t get_chip_ram_size(uint16_t wlan_chip_id, uint32_t* size) {
    uint32_t ram_size;

    if ((wlan_chip_id == 4334) || (wlan_chip_id == 43340) || (wlan_chip_id == 43342) || (wlan_chip_id == 43430) ||
        (wlan_chip_id == 43439)) {
        ram_size = (512 * 1024);
    }
    else if ((wlan_chip_id == 43362) || (wlan_chip_id == 4390)) {
        ram_size = 0x3C000;
    }
    else if ((wlan_chip_id == 43909) || (wlan_chip_id == 43907) || (wlan_chip_id == 54907)) {
        ram_size = 0x90000;
    }
    else if ((wlan_chip_id == 43012) || (wlan_chip_id == 43022)) {
        ram_size = 0xA0000;
    }
    else if (wlan_chip_id == 0x4373) {
        ram_size = 0xE0000;
    }
    else if (wlan_chip_id == 55560) {
        ram_size = 0x150000 - 0x800 - 0x2b4;
    }
    else if ((wlan_chip_id == 55500) || (wlan_chip_id == 55900) ||
             (wlan_chip_id == 55530)) { /* Hatchet1-A1 and Hatchet1-CP supports TRXv5 */
        #ifndef DOWNLOAD_RAM_BOOTLOADER
        ram_size = 0xE0000 - 0x20 - 0x1000;
        #else
        ram_size = 0xE0000 - 0x20 - 0x800;
        #endif
    }
    else {
        ram_size = 0x80000;
    }

    *size = ram_size;

    return (WHD_SUCCESS);
}

whd_result_t get_atcm_ram_base_address(uint16_t wlan_chip_id, uint32_t* size) {
    uint32_t base_addr = 0;

    if (wlan_chip_id == 0x4373) {
        base_addr = 0x160000;
    }
    else if ((wlan_chip_id == 43909) || (wlan_chip_id == 43907) || (wlan_chip_id == 54907)) {
        base_addr = 0x1B0000;
    }
    else if (wlan_chip_id == 55560) {
        base_addr = 0x370000 + 0x2b4 + 0x800;
    }
    else if ((wlan_chip_id == 55500) || (wlan_chip_id == 55900) ||
             (wlan_chip_id == 55530)) { /* Hatchet1-A1 and Hatchet1-CP supports TRXv5 */
        #ifndef DOWNLOAD_RAM_BOOTLOADER
        base_addr = 0x3a0000 + 0x20 + 0x1000;
        #else
        base_addr = 0x3a0000 + 0x20 + 0x800;
        #endif
    }
    else {
        base_addr = 0;
    }

    *size = base_addr;

    return (WHD_SUCCESS);
}

whd_result_t get_socsram_srmem_size(uint16_t wlan_chip_id, uint32_t* mem_size) {
    uint32_t val;

    if ((wlan_chip_id == 43340) || (wlan_chip_id == 43342)) {
        val = (32 * 1024);
    }
    else if ((wlan_chip_id == 43430) || (wlan_chip_id == 43439)) {
        val = (64 * 1024);
    }
    else {
        val = 0;
    }

    *mem_size = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_band_mask(uint16_t wlan_chip_id, uint32_t* band_mask) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0xf000;
    }
    else {
        val = 0xc000;
    }

    *band_mask = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_band_2G(uint16_t wlan_chip_id, uint32_t* band_2g) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x2000;
    }
    else {
        val = 0x0000;
    }

    *band_2g = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_band_5G(uint16_t wlan_chip_id, uint32_t* band_5g) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x1000;
    }
    else {
        val = 0xc000;
    }

    *band_5g = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_band_6G(uint16_t wlan_chip_id, uint32_t* band_6g) {
    uint32_t val;

    if ((wlan_chip_id == 55500) || (wlan_chip_id == 55560) ||
        (wlan_chip_id == 55900) || (wlan_chip_id == 55530)) {
        val = 0x8000;
    }
    else {
        val = 0;
    }

    *band_6g = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_band_shift(uint16_t wlan_chip_id, uint32_t* band_shift) {
    uint32_t val;

    if ((wlan_chip_id == 4334) || (wlan_chip_id == 43340) || (wlan_chip_id == 43342)) {
        val = 12;
    }
    else {
        val = 14;
    }

    *band_shift = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_bw_10(uint16_t wlan_chip_id, uint32_t* bw_10) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0400;
    }
    else {
        val = 0x0800;
    }

    *bw_10 = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_bw_20(uint16_t wlan_chip_id, uint32_t* bw_20) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0800;
    }
    else {
        val = 0x1000;
    }

    *bw_20 = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_bw_40(uint16_t wlan_chip_id, uint32_t* bw_40) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0C00;
    }
    else {
        val = 0x1800;
    }

    *bw_40 = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_bw_80(uint16_t wlan_chip_id, uint32_t* bw_80) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = 0x2000;
    }

    *bw_80 = val;

    return (result);
}

whd_result_t get_wl_chanspec_bw_160(uint16_t wlan_chip_id, uint32_t* bw_160) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = 0x2800;
    }

    *bw_160 = val;

    return (result);
}

whd_result_t get_wl_chanspec_bw_mask(uint16_t wlan_chip_id, uint32_t* bw_mask) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0C00;
    }
    else {
        val = 0x3800;
    }

    *bw_mask = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_bw_shift(uint16_t wlan_chip_id, uint32_t* bw_shift) {
    uint32_t val;

    if ((wlan_chip_id == 4334) || (wlan_chip_id == 43340) || (wlan_chip_id == 43342)) {
        val = 10;
    }
    else {
        val = 11;
    }

    *bw_shift = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_ctl_sb_none(uint16_t wlan_chip_id, uint32_t* sb_none) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0300;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_LLL;
    }

    *sb_none = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_ctl_sb_LLL(uint16_t wlan_chip_id, uint32_t* sb_lll) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0100;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_LLL;
    }

    *sb_lll = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_ctl_sb_LLU(uint16_t wlan_chip_id, uint32_t* sb_llu) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0200;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_LLU;
    }

    *sb_llu = val;

    return (WHD_SUCCESS);
}

whd_result_t get_wl_chanspec_ctl_sb_LUL(uint16_t wlan_chip_id, uint32_t* sb_lul) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_LUL;
    }

    *sb_lul = val;

    return (result);
}

whd_result_t get_wl_chanspec_ctl_sb_LUU(uint16_t wlan_chip_id, uint32_t* sb_luu) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_LUU;
    }

    *sb_luu = val;

    return (result);
}

whd_result_t get_wl_chanspec_ctl_sb_ULL(uint16_t wlan_chip_id, uint32_t* sb_ull) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_ULL;
    }

    *sb_ull = val;

    return (result);
}

whd_result_t get_wl_chanspec_ctl_sb_ULU(uint16_t wlan_chip_id, uint32_t* sb_ulu) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_ULU;
    }

    *sb_ulu = val;

    return (result);
}

whd_result_t get_wl_chanspec_ctl_sb_UUL(uint16_t wlan_chip_id, uint32_t* sb_uul) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_UUL;
    }

    *sb_uul = val;

    return (result);
}

whd_result_t get_wl_chanspec_ctl_sb_UUU(uint16_t wlan_chip_id, uint32_t* sb_uuu) {
    uint32_t val = 0;
    whd_result_t result = WHD_SUCCESS;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        result = WHD_UNSUPPORTED;
    }
    else {
        val = WL_CHANSPEC_CTL_SB_UUU;
    }

    *sb_uuu = val;

    return (result);
}

whd_result_t get_wl_chanspec_ctl_sb_mask(uint16_t wlan_chip_id, uint32_t* sb_mask) {
    uint32_t val;

    if (whd_is_legacy_chanspec_chip(wlan_chip_id) == WHD_TRUE) {
        val = 0x0300;
    }
    else {
        val = 0x0700;
    }

    *sb_mask = val;

    return (WHD_SUCCESS);
}

whd_result_t get_nvram_dwnld_start_address(uint16_t wlan_chip_id, uint32_t* addr) {
    switch (wlan_chip_id) {
        case 43022 :
            *addr = 0x80000;
            break;

        default :
            return (WHD_BADARG);
    }

    return (WHD_SUCCESS);
}
