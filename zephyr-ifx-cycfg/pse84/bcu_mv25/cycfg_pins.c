/*******************************************************************************
 * File Name: cycfg_pins.c
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.80.0
 * device-db 4.37.0.10260
 * mtb-dsl-pse8xxgp 1.5.0.1072
 *
 *******************************************************************************
 * Copyright 2026, Infineon Technologies AG, or an affiliate of Infineon
 * Technologies AG. All rights reserved.
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
 ******************************************************************************/

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t SCB3_SPI_CS0_PMIC_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_CS0_PMIC_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_SS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_OSPI_RAM_SS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_QSPI_D0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_QSPI_D0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_QSPI_D1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_QSPI_D1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_QSPI_D2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_QSPI_D2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_QSPI_D3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_QSPI_D3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ENT_BTN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = ENT_BTN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RTC_TS_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RTC_TS_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RTC_INT_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = RTC_INT_L_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SECURE_RST_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SECURE_RST_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_I3C_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_CFGOUT3_STRONG_PULLUP_HIGHZ,
    .hsiom = CYBSP_I3C_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_I3C_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_CFGOUT3_STRONG_PULLUP_HIGHZ,
    .hsiom = CYBSP_I3C_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D4_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D5_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D6_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_OSPI_RAM_D7_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_OSPI_RAM_D7_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_QSPI_SS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_QSPI_SS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_SWJ_TDO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_SWJ_TDO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_SWJ_TDI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = CYBSP_SWJ_TDI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_SWJ_SWDIO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = CYBSP_SWJ_SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLDOWN,
    .hsiom = CYBSP_SWDCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K1_FDO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K1_FDO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB2_UART_RX_UART_HS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB2_UART_RX_UART_HS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K3_FDO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K3_FDO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB2_UART_TX_UART_HS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB2_UART_TX_UART_HS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t F1_FS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = F1_FS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t F3_FS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = F3_FS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PWM_IL_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PWM_IL_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_EXT_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_EXT_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PWM_IL_IN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = PWM_IL_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K1_PWM_FB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = K1_PWM_FB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K3_PWM_FB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = K3_PWM_FB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_DIO2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = BMS_COM2_DIO2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_DIO2_DIR_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_DIO2_DIR_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t FRAM_WP_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = FRAM_WP_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SEL_BTN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SEL_BTN_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_FAULT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = LOAD_SW_FAULT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN4_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_LHM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_LHM_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K_ENBL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K_ENBL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_USER_LED3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_USER_LED3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB1_UART_TX_UART_LS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB1_UART_TX_UART_LS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB1_UART_RX_UART_LS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB1_UART_RX_UART_LS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CYBSP_BT_UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_BT_UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_UART_CTS_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CYBSP_BT_UART_CTS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_UART_RTS_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_BT_UART_RTS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_POWER_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_BT_POWER_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_RX_CTL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_RX_CTL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_RXD0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_RXD0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_RXD1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_RXD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_I2C_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_I2C_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_I2C_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_I2C_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_TXD0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_TXD0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_TXD1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_TXD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_TX_CTL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_TX_CTL_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_DEVICE_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_BT_DEVICE_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_WL_REG_ON_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_WIFI_WL_REG_ON_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_REF_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = RMII_ETH_REF_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_SDIO_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_WIFI_SDIO_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_SEL_5,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_SDIO_D0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_WIFI_SDIO_D0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_SEL_5,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_SDIO_D1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_WIFI_SDIO_D1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_SEL_5,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WL_DEV_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_WL_DEV_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_SDIO_D2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_WIFI_SDIO_D2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_SEL_5,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_SDIO_D3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_WIFI_SDIO_D3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_SEL_5,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_BT_HOST_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CYBSP_BT_HOST_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_RISING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ETH_MDC_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = ETH_MDC_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_USER_LED1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_USER_LED1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_USER_LED2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_USER_LED2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RMII_ETH_NRST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RMII_ETH_NRST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_HOST_WAKE_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CYBSP_WIFI_HOST_WAKE_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ETH_MDIO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = ETH_MDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t RS485_DE_RE_L_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = RS485_DE_RE_L_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PMIC_INT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = PMIC_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t PMIC_WDI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PMIC_WDI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_RST_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_RST_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB8_UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB8_UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB8_UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB8_UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_INT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM2_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_FALLING,
    .intMask = 1UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN1_STB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CAN1_STB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN0_STB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CAN0_STB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_MOSI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_MISO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB9_SPI_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_CS0_K1_CSB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_CS0_K1_CSB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB9_SPI_CS1_K3_CSB_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB9_SPI_CS1_K3_CSB_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ADC_SAR5_K1_CSNS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_SAR5_K1_CSNS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ADC_SAR6_K3_CSNS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_SAR6_K3_CSNS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t ADC_TEMP_SENS_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_TEMP_SENS_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN0_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CAN0_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN0_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CAN0_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN1_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CAN1_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CAN1_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CAN1_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_DIO1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_DIO1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_SPI_MISO_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM2_SPI_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_CS0_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_CS0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_CS1_MC33XS2410_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_CS1_MC33XS2410_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_SPI_CLK_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM2_SPI_MOSI_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM2_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_SPI_CLK_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_SPI_MOSI_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_DIO1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_DIO1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_MISO_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM1_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_CS0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = BMS_COM1_CS0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_DIO2_config =
{
    .outVal = 0,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = BMS_COM1_DIO2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_ECO_IN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_ECO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_ECO_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_ECO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_TRACE_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_TRACE_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_TRACE_DATA3_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_TRACE_DATA3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_TRACE_DATA2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_TRACE_DATA2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_TRACE_DATA1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_TRACE_DATA1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_TRACE_DATA0_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_TRACE_DATA0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t BMS_COM1_INT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = BMS_COM1_INT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K1_PWM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K1_PWM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t K3_PWM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = K3_PWM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_WIFI_SDIO_CMD_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_WIFI_SDIO_CMD_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_SEL_5,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t CYBSP_MEMORY_RESET_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_MEMORY_RESET_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN1_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t LOAD_SW_IN2_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = LOAD_SW_IN2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_MISO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SCB3_SPI_MISO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_MOSI_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_MOSI_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_CLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_CLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};
const cy_stc_gpio_pin_config_t SCB3_SPI_CS1_FRAM_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = SCB3_SPI_CS1_FRAM_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .intMask = 0UL,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .driveSel = CY_GPIO_DRIVE_1_2,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
    .pullUpRes = CY_GPIO_PULLUP_RES_DISABLE,
    .nonSec = 1,
};

void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(SCB3_SPI_CS0_PMIC_PORT, SCB3_SPI_CS0_PMIC_PIN, &SCB3_SPI_CS0_PMIC_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_SS_PORT, CYBSP_OSPI_RAM_SS_PIN, &CYBSP_OSPI_RAM_SS_config);
    Cy_GPIO_Pin_Init(CYBSP_QSPI_D0_PORT, CYBSP_QSPI_D0_PIN, &CYBSP_QSPI_D0_config);
    Cy_GPIO_Pin_Init(CYBSP_QSPI_D1_PORT, CYBSP_QSPI_D1_PIN, &CYBSP_QSPI_D1_config);
    Cy_GPIO_Pin_Init(CYBSP_QSPI_D2_PORT, CYBSP_QSPI_D2_PIN, &CYBSP_QSPI_D2_config);
    Cy_GPIO_Pin_Init(CYBSP_QSPI_D3_PORT, CYBSP_QSPI_D3_PIN, &CYBSP_QSPI_D3_config);
#if defined(CY_MMIO_SMIF0_PERI_NR)
    Cy_SysClk_PeriGroupSlaveInit(CY_MMIO_SMIF0_PERI_NR, CY_MMIO_SMIF0_GROUP_NR, CY_MMIO_SMIF0_SLAVE_NR, CY_MMIO_SMIF0_CLK_HF_NR);
    Cy_GPIO_SetHSIOM((GPIO_PRT_Type*)SMIF0_CORE_SMIF_GPIO_SMIF_PRT0, ENT_BTN_PIN, HSIOM_SEL_ACT_14);
    Cy_GPIO_SetHSIOM(ENT_BTN_PORT, ENT_BTN_PIN, ENT_BTN_HSIOM);
    Cy_GPIO_SetDrivemode(ENT_BTN_PORT, ENT_BTN_PIN, CY_GPIO_DM_PULLUP);
    Cy_GPIO_WriteDirectOut(ENT_BTN_PORT, ENT_BTN_PIN, 1);
#endif /* defined(CY_MMIO_SMIF0_PERI_NR) */
    Cy_GPIO_SetHSIOM_SecPin(GPIO_PRT1, ENT_BTN_PIN, 1);
#if defined(CY_MMIO_SMIF0_PERI_NR)
    Cy_SysClk_PeriGroupSlaveInit(CY_MMIO_SMIF0_PERI_NR, CY_MMIO_SMIF0_GROUP_NR, CY_MMIO_SMIF0_SLAVE_NR, CY_MMIO_SMIF0_CLK_HF_NR);
    Cy_GPIO_SetHSIOM((GPIO_PRT_Type*)SMIF0_CORE_SMIF_GPIO_SMIF_PRT0, RTC_TS_L_PIN, HSIOM_SEL_ACT_14);
    Cy_GPIO_SetHSIOM(RTC_TS_L_PORT, RTC_TS_L_PIN, RTC_TS_L_HSIOM);
    Cy_GPIO_SetDrivemode(RTC_TS_L_PORT, RTC_TS_L_PIN, CY_GPIO_DM_STRONG_IN_OFF);
    Cy_GPIO_WriteDirectOut(RTC_TS_L_PORT, RTC_TS_L_PIN, 1);
#endif /* defined(CY_MMIO_SMIF0_PERI_NR) */
    Cy_GPIO_SetHSIOM_SecPin(GPIO_PRT1, RTC_TS_L_PIN, 1);
#if defined(CY_MMIO_SMIF0_PERI_NR)
    Cy_SysClk_PeriGroupSlaveInit(CY_MMIO_SMIF0_PERI_NR, CY_MMIO_SMIF0_GROUP_NR, CY_MMIO_SMIF0_SLAVE_NR, CY_MMIO_SMIF0_CLK_HF_NR);
    Cy_GPIO_SetHSIOM((GPIO_PRT_Type*)SMIF0_CORE_SMIF_GPIO_SMIF_PRT0, RTC_INT_L_PIN, HSIOM_SEL_ACT_14);
    Cy_GPIO_SetHSIOM(RTC_INT_L_PORT, RTC_INT_L_PIN, RTC_INT_L_HSIOM);
    Cy_GPIO_SetDrivemode(RTC_INT_L_PORT, RTC_INT_L_PIN, CY_GPIO_DM_PULLUP);
    Cy_GPIO_WriteDirectOut(RTC_INT_L_PORT, RTC_INT_L_PIN, 1);
#endif /* defined(CY_MMIO_SMIF0_PERI_NR) */
    Cy_GPIO_SetHSIOM_SecPin(GPIO_PRT1, RTC_INT_L_PIN, 1);
    Cy_GPIO_SetInterruptEdge(GPIO_PRT1, RTC_INT_L_PIN, CY_GPIO_INTR_FALLING);
    Cy_GPIO_ClearInterrupt(GPIO_PRT1, RTC_INT_L_PIN);
    Cy_GPIO_SetInterruptMask(GPIO_PRT1, RTC_INT_L_PIN, 1UL);
#if defined(CY_MMIO_SMIF0_PERI_NR)
    Cy_SysClk_PeriGroupSlaveInit(CY_MMIO_SMIF0_PERI_NR, CY_MMIO_SMIF0_GROUP_NR, CY_MMIO_SMIF0_SLAVE_NR, CY_MMIO_SMIF0_CLK_HF_NR);
    Cy_GPIO_SetHSIOM((GPIO_PRT_Type*)SMIF0_CORE_SMIF_GPIO_SMIF_PRT0, SECURE_RST_L_PIN, HSIOM_SEL_ACT_14);
    Cy_GPIO_SetHSIOM(SECURE_RST_L_PORT, SECURE_RST_L_PIN, SECURE_RST_L_HSIOM);
    Cy_GPIO_SetDrivemode(SECURE_RST_L_PORT, SECURE_RST_L_PIN, CY_GPIO_DM_STRONG_IN_OFF);
    Cy_GPIO_WriteDirectOut(SECURE_RST_L_PORT, SECURE_RST_L_PIN, 1);
#endif /* defined(CY_MMIO_SMIF0_PERI_NR) */
    Cy_GPIO_SetHSIOM_SecPin(GPIO_PRT1, SECURE_RST_L_PIN, 1);
    Cy_GPIO_Pin_Init(BMS_COM1_RST_PORT, BMS_COM1_RST_PIN, &BMS_COM1_RST_config);
    Cy_GPIO_Pin_Init(CYBSP_I3C_SCL_PORT, CYBSP_I3C_SCL_PIN, &CYBSP_I3C_SCL_config);
    Cy_GPIO_Pin_Init(CYBSP_I3C_SDA_PORT, CYBSP_I3C_SDA_PIN, &CYBSP_I3C_SDA_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D0_PORT, CYBSP_OSPI_RAM_D0_PIN, &CYBSP_OSPI_RAM_D0_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D1_PORT, CYBSP_OSPI_RAM_D1_PIN, &CYBSP_OSPI_RAM_D1_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D2_PORT, CYBSP_OSPI_RAM_D2_PIN, &CYBSP_OSPI_RAM_D2_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D3_PORT, CYBSP_OSPI_RAM_D3_PIN, &CYBSP_OSPI_RAM_D3_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D4_PORT, CYBSP_OSPI_RAM_D4_PIN, &CYBSP_OSPI_RAM_D4_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D5_PORT, CYBSP_OSPI_RAM_D5_PIN, &CYBSP_OSPI_RAM_D5_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D6_PORT, CYBSP_OSPI_RAM_D6_PIN, &CYBSP_OSPI_RAM_D6_config);
    Cy_GPIO_Pin_Init(CYBSP_OSPI_RAM_D7_PORT, CYBSP_OSPI_RAM_D7_PIN, &CYBSP_OSPI_RAM_D7_config);
    Cy_GPIO_Pin_Init(CYBSP_QSPI_SS_PORT, CYBSP_QSPI_SS_PIN, &CYBSP_QSPI_SS_config);
    Cy_GPIO_Pin_Init(CYBSP_SWJ_TDO_PORT, CYBSP_SWJ_TDO_PIN, &CYBSP_SWJ_TDO_config);
    Cy_GPIO_Pin_Init(CYBSP_SWJ_TDI_PORT, CYBSP_SWJ_TDI_PIN, &CYBSP_SWJ_TDI_config);
    Cy_GPIO_Pin_Init(CYBSP_SWJ_SWDIO_PORT, CYBSP_SWJ_SWDIO_PIN, &CYBSP_SWJ_SWDIO_config);
    Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
    Cy_GPIO_Pin_Init(K1_FDO_PORT, K1_FDO_PIN, &K1_FDO_config);
    Cy_GPIO_Pin_Init(SCB2_UART_RX_UART_HS_PORT, SCB2_UART_RX_UART_HS_PIN, &SCB2_UART_RX_UART_HS_config);
    Cy_GPIO_Pin_Init(K3_FDO_PORT, K3_FDO_PIN, &K3_FDO_config);
    Cy_GPIO_Pin_Init(SCB2_UART_TX_UART_HS_PORT, SCB2_UART_TX_UART_HS_PIN, &SCB2_UART_TX_UART_HS_config);
    Cy_GPIO_Pin_Init(F1_FS_PORT, F1_FS_PIN, &F1_FS_config);
    Cy_GPIO_Pin_Init(F3_FS_PORT, F3_FS_PIN, &F3_FS_config);
    Cy_GPIO_Pin_Init(PWM_IL_OUT_PORT, PWM_IL_OUT_PIN, &PWM_IL_OUT_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN3_PORT, LOAD_SW_IN3_PIN, &LOAD_SW_IN3_config);
    Cy_GPIO_Pin_Init(PWM_IL_IN_PORT, PWM_IL_IN_PIN, &PWM_IL_IN_config);
    Cy_GPIO_Pin_Init(K1_PWM_FB_PORT, K1_PWM_FB_PIN, &K1_PWM_FB_config);
    Cy_GPIO_Pin_Init(K3_PWM_FB_PORT, K3_PWM_FB_PIN, &K3_PWM_FB_config);
    Cy_GPIO_Pin_Init(BMS_COM2_DIO2_PORT, BMS_COM2_DIO2_PIN, &BMS_COM2_DIO2_config);
    Cy_GPIO_Pin_Init(BMS_COM2_DIO2_DIR_PORT, BMS_COM2_DIO2_DIR_PIN, &BMS_COM2_DIO2_DIR_config);
    Cy_GPIO_Pin_Init(FRAM_WP_L_PORT, FRAM_WP_L_PIN, &FRAM_WP_L_config);
    Cy_GPIO_Pin_Init(SEL_BTN_PORT, SEL_BTN_PIN, &SEL_BTN_config);
    Cy_GPIO_Pin_Init(LOAD_SW_RST_PORT, LOAD_SW_RST_PIN, &LOAD_SW_RST_config);
    Cy_GPIO_Pin_Init(LOAD_SW_FAULT_PORT, LOAD_SW_FAULT_PIN, &LOAD_SW_FAULT_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN4_PORT, LOAD_SW_IN4_PIN, &LOAD_SW_IN4_config);
    Cy_GPIO_Pin_Init(LOAD_SW_LHM_PORT, LOAD_SW_LHM_PIN, &LOAD_SW_LHM_config);
    Cy_GPIO_Pin_Init(K_ENBL_PORT, K_ENBL_PIN, &K_ENBL_config);
    Cy_GPIO_Pin_Init(CYBSP_USER_LED3_PORT, CYBSP_USER_LED3_PIN, &CYBSP_USER_LED3_config);
    Cy_GPIO_Pin_Init(SCB1_UART_TX_UART_LS_PORT, SCB1_UART_TX_UART_LS_PIN, &SCB1_UART_TX_UART_LS_config);
    Cy_GPIO_Pin_Init(SCB1_UART_RX_UART_LS_PORT, SCB1_UART_RX_UART_LS_PIN, &SCB1_UART_RX_UART_LS_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_UART_RX_PORT, CYBSP_BT_UART_RX_PIN, &CYBSP_BT_UART_RX_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_UART_TX_PORT, CYBSP_BT_UART_TX_PIN, &CYBSP_BT_UART_TX_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_UART_CTS_PORT, CYBSP_BT_UART_CTS_PIN, &CYBSP_BT_UART_CTS_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_UART_RTS_PORT, CYBSP_BT_UART_RTS_PIN, &CYBSP_BT_UART_RTS_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_POWER_PORT, CYBSP_BT_POWER_PIN, &CYBSP_BT_POWER_config);
    Cy_GPIO_Pin_Init(RMII_ETH_RX_CTL_PORT, RMII_ETH_RX_CTL_PIN, &RMII_ETH_RX_CTL_config);
    Cy_GPIO_Pin_Init(RMII_ETH_RXD0_PORT, RMII_ETH_RXD0_PIN, &RMII_ETH_RXD0_config);
    Cy_GPIO_Pin_Init(RMII_ETH_RXD1_PORT, RMII_ETH_RXD1_PIN, &RMII_ETH_RXD1_config);
    Cy_GPIO_Pin_Init(CYBSP_I2C_SCL_PORT, CYBSP_I2C_SCL_PIN, &CYBSP_I2C_SCL_config);
    Cy_GPIO_Pin_Init(CYBSP_I2C_SDA_PORT, CYBSP_I2C_SDA_PIN, &CYBSP_I2C_SDA_config);
    Cy_GPIO_Pin_Init(RMII_ETH_TXD0_PORT, RMII_ETH_TXD0_PIN, &RMII_ETH_TXD0_config);
    Cy_GPIO_Pin_Init(RMII_ETH_TXD1_PORT, RMII_ETH_TXD1_PIN, &RMII_ETH_TXD1_config);
    Cy_GPIO_Pin_Init(RMII_ETH_TX_CTL_PORT, RMII_ETH_TX_CTL_PIN, &RMII_ETH_TX_CTL_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_DEVICE_WAKE_PORT, CYBSP_BT_DEVICE_WAKE_PIN, &CYBSP_BT_DEVICE_WAKE_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_WL_REG_ON_PORT, CYBSP_WIFI_WL_REG_ON_PIN, &CYBSP_WIFI_WL_REG_ON_config);
    Cy_GPIO_Pin_Init(RMII_ETH_REF_CLK_PORT, RMII_ETH_REF_CLK_PIN, &RMII_ETH_REF_CLK_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_SDIO_CLK_PORT, CYBSP_WIFI_SDIO_CLK_PIN, &CYBSP_WIFI_SDIO_CLK_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_SDIO_D0_PORT, CYBSP_WIFI_SDIO_D0_PIN, &CYBSP_WIFI_SDIO_D0_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_SDIO_D1_PORT, CYBSP_WIFI_SDIO_D1_PIN, &CYBSP_WIFI_SDIO_D1_config);
    Cy_GPIO_Pin_Init(CYBSP_WL_DEV_WAKE_PORT, CYBSP_WL_DEV_WAKE_PIN, &CYBSP_WL_DEV_WAKE_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_SDIO_D2_PORT, CYBSP_WIFI_SDIO_D2_PIN, &CYBSP_WIFI_SDIO_D2_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_SDIO_D3_PORT, CYBSP_WIFI_SDIO_D3_PIN, &CYBSP_WIFI_SDIO_D3_config);
    Cy_GPIO_Pin_Init(CYBSP_BT_HOST_WAKE_PORT, CYBSP_BT_HOST_WAKE_PIN, &CYBSP_BT_HOST_WAKE_config);
    Cy_GPIO_Pin_Init(ETH_MDC_PORT, ETH_MDC_PIN, &ETH_MDC_config);
    Cy_GPIO_Pin_Init(CYBSP_USER_LED1_PORT, CYBSP_USER_LED1_PIN, &CYBSP_USER_LED1_config);
    Cy_GPIO_Pin_Init(CYBSP_USER_LED2_PORT, CYBSP_USER_LED2_PIN, &CYBSP_USER_LED2_config);
    Cy_GPIO_Pin_Init(RMII_ETH_NRST_PORT, RMII_ETH_NRST_PIN, &RMII_ETH_NRST_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_HOST_WAKE_PORT, CYBSP_WIFI_HOST_WAKE_PIN, &CYBSP_WIFI_HOST_WAKE_config);
    Cy_GPIO_Pin_Init(ETH_MDIO_PORT, ETH_MDIO_PIN, &ETH_MDIO_config);
    Cy_GPIO_Pin_Init(RS485_DE_RE_L_PORT, RS485_DE_RE_L_PIN, &RS485_DE_RE_L_config);
    Cy_GPIO_Pin_Init(PMIC_INT_PORT, PMIC_INT_PIN, &PMIC_INT_config);
    Cy_GPIO_Pin_Init(PMIC_WDI_PORT, PMIC_WDI_PIN, &PMIC_WDI_config);
    Cy_GPIO_Pin_Init(BMS_COM2_RST_PORT, BMS_COM2_RST_PIN, &BMS_COM2_RST_config);
    Cy_GPIO_Pin_Init(SCB8_UART_TX_PORT, SCB8_UART_TX_PIN, &SCB8_UART_TX_config);
    Cy_GPIO_Pin_Init(SCB8_UART_RX_PORT, SCB8_UART_RX_PIN, &SCB8_UART_RX_config);
    Cy_GPIO_Pin_Init(BMS_COM2_INT_PORT, BMS_COM2_INT_PIN, &BMS_COM2_INT_config);
    Cy_GPIO_Pin_Init(CAN1_STB_PORT, CAN1_STB_PIN, &CAN1_STB_config);
    Cy_GPIO_Pin_Init(CAN0_STB_PORT, CAN0_STB_PIN, &CAN0_STB_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_CLK_PORT, SCB9_SPI_CLK_PIN, &SCB9_SPI_CLK_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_MOSI_PORT, SCB9_SPI_MOSI_PIN, &SCB9_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_MISO_PORT, SCB9_SPI_MISO_PIN, &SCB9_SPI_MISO_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_CS0_K1_CSB_PORT, SCB9_SPI_CS0_K1_CSB_PIN, &SCB9_SPI_CS0_K1_CSB_config);
    Cy_GPIO_Pin_Init(SCB9_SPI_CS1_K3_CSB_PORT, SCB9_SPI_CS1_K3_CSB_PIN, &SCB9_SPI_CS1_K3_CSB_config);
    Cy_GPIO_Pin_Init(ADC_SAR5_K1_CSNS_PORT, ADC_SAR5_K1_CSNS_PIN, &ADC_SAR5_K1_CSNS_config);
    Cy_GPIO_Pin_Init(ADC_SAR6_K3_CSNS_PORT, ADC_SAR6_K3_CSNS_PIN, &ADC_SAR6_K3_CSNS_config);
    Cy_GPIO_Pin_Init(ADC_TEMP_SENS_PORT, ADC_TEMP_SENS_PIN, &ADC_TEMP_SENS_config);
    Cy_GPIO_Pin_Init(CAN0_RX_PORT, CAN0_RX_PIN, &CAN0_RX_config);
    Cy_GPIO_Pin_Init(CAN0_TX_PORT, CAN0_TX_PIN, &CAN0_TX_config);
    Cy_GPIO_Pin_Init(CAN1_RX_PORT, CAN1_RX_PIN, &CAN1_RX_config);
    Cy_GPIO_Pin_Init(CAN1_TX_PORT, CAN1_TX_PIN, &CAN1_TX_config);
    Cy_GPIO_Pin_Init(BMS_COM2_DIO1_PORT, BMS_COM2_DIO1_PIN, &BMS_COM2_DIO1_config);
    Cy_GPIO_Pin_Init(BMS_COM2_SPI_MISO_PORT, BMS_COM2_SPI_MISO_PIN, &BMS_COM2_SPI_MISO_config);
    Cy_GPIO_Pin_Init(BMS_COM2_CS0_PORT, BMS_COM2_CS0_PIN, &BMS_COM2_CS0_config);
    Cy_GPIO_Pin_Init(BMS_COM2_CS1_MC33XS2410_PORT, BMS_COM2_CS1_MC33XS2410_PIN, &BMS_COM2_CS1_MC33XS2410_config);
    Cy_GPIO_Pin_Init(BMS_COM2_SPI_CLK_PORT, BMS_COM2_SPI_CLK_PIN, &BMS_COM2_SPI_CLK_config);
    Cy_GPIO_Pin_Init(BMS_COM2_SPI_MOSI_PORT, BMS_COM2_SPI_MOSI_PIN, &BMS_COM2_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(BMS_COM1_SPI_CLK_PORT, BMS_COM1_SPI_CLK_PIN, &BMS_COM1_SPI_CLK_config);
    Cy_GPIO_Pin_Init(BMS_COM1_SPI_MOSI_PORT, BMS_COM1_SPI_MOSI_PIN, &BMS_COM1_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(BMS_COM1_DIO1_PORT, BMS_COM1_DIO1_PIN, &BMS_COM1_DIO1_config);
    Cy_GPIO_Pin_Init(BMS_COM1_MISO_PORT, BMS_COM1_MISO_PIN, &BMS_COM1_MISO_config);
    Cy_GPIO_Pin_Init(BMS_COM1_CS0_PORT, BMS_COM1_CS0_PIN, &BMS_COM1_CS0_config);
    Cy_GPIO_Pin_Init(BMS_COM1_DIO2_PORT, BMS_COM1_DIO2_PIN, &BMS_COM1_DIO2_config);
    Cy_GPIO_Pin_Init(CYBSP_TRACE_CLK_PORT, CYBSP_TRACE_CLK_PIN, &CYBSP_TRACE_CLK_config);
    Cy_GPIO_Pin_Init(CYBSP_TRACE_DATA3_PORT, CYBSP_TRACE_DATA3_PIN, &CYBSP_TRACE_DATA3_config);
    Cy_GPIO_Pin_Init(CYBSP_TRACE_DATA2_PORT, CYBSP_TRACE_DATA2_PIN, &CYBSP_TRACE_DATA2_config);
    Cy_GPIO_Pin_Init(CYBSP_TRACE_DATA1_PORT, CYBSP_TRACE_DATA1_PIN, &CYBSP_TRACE_DATA1_config);
    Cy_GPIO_Pin_Init(CYBSP_TRACE_DATA0_PORT, CYBSP_TRACE_DATA0_PIN, &CYBSP_TRACE_DATA0_config);
    Cy_GPIO_Pin_Init(BMS_COM1_INT_PORT, BMS_COM1_INT_PIN, &BMS_COM1_INT_config);
    Cy_GPIO_Pin_Init(K1_PWM_PORT, K1_PWM_PIN, &K1_PWM_config);
    Cy_GPIO_Pin_Init(K3_PWM_PORT, K3_PWM_PIN, &K3_PWM_config);
    Cy_GPIO_Pin_Init(CYBSP_WIFI_SDIO_CMD_PORT, CYBSP_WIFI_SDIO_CMD_PIN, &CYBSP_WIFI_SDIO_CMD_config);
    Cy_GPIO_Pin_Init(CYBSP_MEMORY_RESET_PORT, CYBSP_MEMORY_RESET_PIN, &CYBSP_MEMORY_RESET_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN1_PORT, LOAD_SW_IN1_PIN, &LOAD_SW_IN1_config);
    Cy_GPIO_Pin_Init(LOAD_SW_IN2_PORT, LOAD_SW_IN2_PIN, &LOAD_SW_IN2_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_MISO_PORT, SCB3_SPI_MISO_PIN, &SCB3_SPI_MISO_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_MOSI_PORT, SCB3_SPI_MOSI_PIN, &SCB3_SPI_MOSI_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_CLK_PORT, SCB3_SPI_CLK_PIN, &SCB3_SPI_CLK_config);
    Cy_GPIO_Pin_Init(SCB3_SPI_CS1_FRAM_PORT, SCB3_SPI_CS1_FRAM_PIN, &SCB3_SPI_CS1_FRAM_config);
}
