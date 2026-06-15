/*******************************************************************************
 * File Name: cycfg_routing.h
 *
 * Description:
 * Establishes all necessary connections between hardware elements.
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#include "cycfg_notices.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ioss_0_port_0_pin_0_HSIOM P0_0_SCB3_SPI_SELECT0
#define ioss_0_port_0_pin_1_HSIOM P0_1_SMIF1_SMIF0_SPIHB_SELECT2
#define ioss_0_port_3_pin_0_HSIOM P3_0_I3C_I3C_SCL
#define ioss_0_port_3_pin_1_HSIOM P3_1_I3C_I3C_SDA
#define ioss_0_port_5_pin_0_HSIOM P5_0_SMIF0_SMIF0_SPIHB_SELECT0
#define ioss_0_port_6_pin_0_HSIOM P6_0_DEBUG600_SWJ_SWO_TDO
#define ioss_0_port_6_pin_1_HSIOM P6_1_DEBUG600_SWJ_SWDOE_TDI
#define ioss_0_port_6_pin_2_HSIOM P6_2_DEBUG600_SWJ_SWDIO_TMS
#define ioss_0_port_6_pin_3_HSIOM P6_3_DEBUG600_CLK_SWJ_SWCLK_TCLK
#define ioss_0_port_6_pin_5_HSIOM P6_5_SCB2_UART_RX
#define ioss_0_port_6_pin_7_HSIOM P6_7_SCB2_UART_TX
#define ioss_0_port_7_pin_2_HSIOM P7_2_TCPWM0_LINE272
#define ioss_0_port_7_pin_4_HSIOM P7_4_SRSS_EXT_CLK
#define ioss_0_port_7_pin_5_HSIOM P7_5_PERI1_TR_IO_INPUT4
#define ioss_0_port_7_pin_6_HSIOM P7_6_PERI1_TR_IO_INPUT5
#define ioss_0_port_7_pin_7_HSIOM P7_7_PERI1_TR_IO_INPUT6
#define ioss_0_port_9_pin_2_HSIOM P9_2_SCB1_UART_TX
#define ioss_0_port_9_pin_3_HSIOM P9_3_SCB1_UART_RX
#define ioss_0_port_10_pin_0_HSIOM P10_0_SCB4_UART_RX
#define ioss_0_port_10_pin_1_HSIOM P10_1_SCB4_UART_TX
#define ioss_0_port_10_pin_2_HSIOM P10_2_SCB4_UART_CTS
#define ioss_0_port_10_pin_3_HSIOM P10_3_SCB4_UART_RTS
#define ioss_0_port_10_pin_5_HSIOM P10_5_ETH_RX_CTL
#define ioss_0_port_10_pin_6_HSIOM P10_6_ETH_RXD0
#define ioss_0_port_10_pin_7_HSIOM P10_7_ETH_RXD1
#define ioss_0_port_11_pin_0_HSIOM P11_0_SCB6_I2C_SCL
#define ioss_0_port_11_pin_1_HSIOM P11_1_SCB6_I2C_SDA
#define ioss_0_port_11_pin_2_HSIOM P11_2_ETH_TXD0
#define ioss_0_port_11_pin_3_HSIOM P11_3_ETH_TXD1
#define ioss_0_port_11_pin_4_HSIOM P11_4_ETH_TX_CTL
#define ioss_0_port_11_pin_7_HSIOM P11_7_ETH_REF_CLK
#define ioss_0_port_12_pin_0_HSIOM P12_0_SDHC0_CLK_CARD
#define ioss_0_port_12_pin_1_HSIOM P12_1_SDHC0_CARD_DAT_3TO00
#define ioss_0_port_12_pin_2_HSIOM P12_2_SDHC0_CARD_DAT_3TO01
#define ioss_0_port_12_pin_4_HSIOM P12_4_SDHC0_CARD_DAT_3TO02
#define ioss_0_port_12_pin_5_HSIOM P12_5_SDHC0_CARD_DAT_3TO03
#define ioss_0_port_13_pin_1_HSIOM P13_1_ETH_MDC
#define ioss_0_port_13_pin_6_HSIOM P13_6_ETH_MDIO
#define ioss_0_port_13_pin_7_HSIOM P13_7_SCB8_UART_CTS
#define ioss_0_port_14_pin_3_HSIOM P14_3_SCB8_UART_TX
#define ioss_0_port_14_pin_4_HSIOM P14_4_SCB8_UART_RX
#define ioss_0_port_15_pin_0_HSIOM P15_0_SCB9_SPI_CLK
#define ioss_0_port_15_pin_1_HSIOM P15_1_SCB9_SPI_MOSI
#define ioss_0_port_15_pin_2_HSIOM P15_2_SCB9_SPI_MISO
#define ioss_0_port_15_pin_3_HSIOM P15_3_SCB9_SPI_SELECT0
#define ioss_0_port_15_pin_4_HSIOM P15_4_SCB9_SPI_SELECT1
#define ioss_0_port_16_pin_0_HSIOM P16_0_CANFD0_TTCAN_RX0
#define ioss_0_port_16_pin_1_HSIOM P16_1_CANFD0_TTCAN_TX0
#define ioss_0_port_16_pin_2_HSIOM P16_2_CANFD0_TTCAN_RX1
#define ioss_0_port_16_pin_3_HSIOM P16_3_CANFD0_TTCAN_TX1
#define ioss_0_port_16_pin_5_HSIOM P16_5_SCB5_SPI_MISO
#define ioss_0_port_16_pin_6_HSIOM P16_6_SCB5_SPI_SELECT0
#define ioss_0_port_17_pin_0_HSIOM P17_0_SCB5_SPI_CLK
#define ioss_0_port_17_pin_1_HSIOM P17_1_SCB5_SPI_MOSI
#define ioss_0_port_17_pin_2_HSIOM P17_2_SCB11_SPI_CLK
#define ioss_0_port_17_pin_3_HSIOM P17_3_SCB11_SPI_MOSI
#define ioss_0_port_17_pin_5_HSIOM P17_5_SCB11_SPI_MISO
#define ioss_0_port_17_pin_6_HSIOM P17_6_SCB11_SPI_SELECT0
#define ioss_0_port_20_pin_0_HSIOM P20_0_DEBUG600_TRACE_CLOCK
#define ioss_0_port_20_pin_1_HSIOM P20_1_DEBUG600_TRACE_DATA3
#define ioss_0_port_20_pin_2_HSIOM P20_2_DEBUG600_TRACE_DATA2
#define ioss_0_port_20_pin_3_HSIOM P20_3_DEBUG600_TRACE_DATA1
#define ioss_0_port_20_pin_4_HSIOM P20_4_DEBUG600_TRACE_DATA0
#define ioss_0_port_20_pin_6_HSIOM P20_6_TCPWM0_LINE_COMPL1
#define ioss_0_port_20_pin_7_HSIOM P20_7_TCPWM0_LINE_COMPL2
#define ioss_0_port_21_pin_0_HSIOM P21_0_SDHC0_CARD_CMD
#define ioss_0_port_21_pin_4_HSIOM P21_4_SCB3_SPI_MISO
#define ioss_0_port_21_pin_5_HSIOM P21_5_SCB3_SPI_MOSI
#define ioss_0_port_21_pin_6_HSIOM P21_6_SCB3_SPI_CLK
#define ioss_0_port_21_pin_7_HSIOM P21_7_SCB3_SPI_SELECT1
#define INTERLOCK_IN_capture0_0_TRIGGER_OUT PERI_0_TRIG_OUT_MUX_3_TCPWM0_ONE_CNT_TR_IN260
#define K1_PWM_FB_digital_in_0_TRIGGER_IN PERI_0_TRIG_IN_MUX_3_PERI1_HSIOM_TR_OUT5
#define K3_PWM_FB_digital_in_0_TRIGGER_IN PERI_0_TRIG_IN_MUX_3_PERI1_HSIOM_TR_OUT6
#define PWM_IL_IN_digital_in_0_TRIGGER_IN PERI_0_TRIG_IN_MUX_3_PERI1_HSIOM_TR_OUT4
#define tcpwm_0_group_0_cnt_5_capture0_0_TRIGGER_OUT PERI_0_TRIG_OUT_MUX_3_TCPWM0_ONE_CNT_TR_IN5
#define tcpwm_0_group_0_cnt_6_capture0_0_TRIGGER_OUT PERI_0_TRIG_OUT_MUX_3_TCPWM0_ONE_CNT_TR_IN6
#define TCPWM0_GRP0_CNT5_CAPTURE0_VALUE 0x2
#define TCPWM0_GRP0_CNT6_CAPTURE0_VALUE 0x2
#define TCPWM0_GRP1_CNT4_CAPTURE0_VALUE 0x2

void init_cycfg_routing(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_ROUTING_H */
