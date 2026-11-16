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

#include "whd_debug.h"
#include "whd_int.h"
#include "whd_bus_protocol_interface.h"

/******************************************************
*             Constants
******************************************************/

/******************************************************
*             Structures
******************************************************/

/******************************************************
*             Variables
******************************************************/

/******************************************************
*             Function definitions
******************************************************/
void whd_init_stats(whd_driver_t driver) {
    whd_mem_memset(&driver->whd_stats, 0, sizeof(driver->whd_stats) );
}

whd_result_t whd_print_stats(whd_driver_t driver, whd_bool_t reset_after_print) {
    WPRINT_MACRO(("WHD Stats.. \n"
                  "tx_total:%" PRIu32 ", rx_total:%" PRIu32 ", tx_no_mem:%" PRIu32 ", rx_no_mem:%" PRIu32 "\n"
                  "tx_fail:%" PRIu32 ", no_credit:%" PRIu32 ", flow_control:%" PRIu32 "\n",
                  driver->whd_stats.tx_total , driver->whd_stats.rx_total,
                  driver->whd_stats.tx_no_mem, driver->whd_stats.rx_no_mem,
                  driver->whd_stats.tx_fail  , driver->whd_stats.no_credit,
                  driver->whd_stats.flow_control));

    if (reset_after_print == WHD_TRUE) {
        whd_mem_memset(&driver->whd_stats, 0, sizeof(driver->whd_stats));
    }

    CHECK_RETURN(whd_bus_print_stats(driver, reset_after_print));

    return (WHD_SUCCESS);
}
