/* mbed Microcontroller Library
 * (C)Copyright TOSHIBA ELECTRONIC DEVICES & STORAGE CORPORATION 2018 All rights reserved
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
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "PinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    SERIAL_0 = 0,
    SERIAL_1,
    SERIAL_2,
    SERIAL_3,
    SERIAL_4,
    SERIAL_5,
    INVALID_SERIAL = (int)NC
} UARTName;

typedef enum {
    ADC_AINA00 = 0,
    ADC_AINA01,
    ADC_AINA02,
    ADC_AINA03,
    ADC_AINA04,
    ADC_AINA05,
    ADC_AINA06,
    ADC_AINA07,
    ADC_AINA08,
    ADC_AINA09,
    ADC_AINA10,
    ADC_AINA11,
    ADC_AINA12,
    ADC_AINA13,
    ADC_AINA14,
    ADC_AINA15,
    ADC_AINA16,
    ADC_AINA17,
    ADC_AINA18,
    ADC_AINA19,
    ADC_AINA20,
    INVALID_ADC = (int)NC
} ADCName;

typedef enum {
    DAC_A0 = 0,
    DAC_A1,
    INVALID_DAC = (int)NC
} DACName;

typedef enum {
    SPI_0 = 0,
    SPI_1,
    SPI_2,
    SPI_3,
    SPI_4,
    INVALID_SPI = (int)NC
} SPIName;

typedef enum {
    I2C_0 = 0,
    I2C_1,
    I2C_2,
    I2C_3,
    INVALID_I2C = (int)NC
} I2CName;

typedef enum {
    PWM_0 = 0,
    PWM_1,
    PWM_2,
    PWM_3,
    PWM_4,
    PWM_5,
    PWM_6,
    PWM_7,
    INVALID_PWM = (int)NC
} PWMName;

typedef enum {
    GPIO_IRQ_00 = 0,
    GPIO_IRQ_01,
    GPIO_IRQ_02,
    GPIO_IRQ_03,
    GPIO_IRQ_04,
    GPIO_IRQ_05,
    GPIO_IRQ_06,
    GPIO_IRQ_07,
    GPIO_IRQ_08,
    GPIO_IRQ_09,
    GPIO_IRQ_10,
    GPIO_IRQ_11,
    GPIO_IRQ_12,
    GPIO_IRQ_13,
    GPIO_IRQ_14,
    GPIO_IRQ_15,
    GPIO_IRQ_16,
    GPIO_IRQ_17_18,
    GPIO_IRQ_19_22,
    GPIO_IRQ_23_26,
    GPIO_IRQ_27_28,
    GPIO_IRQ_29,
    GPIO_IRQ_30_31,
    INVALID_GPIO_IRQ = (int)NC
} gpio_irqname;

#define STDIO_UART_TX     USBTX
#define STDIO_UART_RX     USBRX
#define STDIO_UART        SERIAL_1

#ifdef __cplusplus
}
#endif

#endif
