/*
 * app_MAX7219.h
 *
 *  Created on: Jul 22, 2020
 *      Author: dario
 */

#ifndef APP_MAX7219_H_
#define APP_MAX7219_H_


#include "main.h"
#include "app_Delay.h"

#if defined(STM32L4)
	#include "stm32l412xx.h"
	#include "stm32l4xx_hal.h"
	#include "stm32l4xx_hal_spi.h"
	#include "stm32l4xx_hal_gpio.h"
#elif defined(STM32F1)
	#include "stm32f1xx.h"
	#include "stm32f1xx_hal.h"
	#include "stm32f1xx_hal_spi.h"
	#include "stm32f1xx_hal_gpio.h"
#endif

SPI_HandleTypeDef hspi1;

#define MAX7219_MODE_DECODE       0x0900
#define MAX7219_MODE_INTENSITY    0x0A00
#define MAX7219_MODE_SCAN_LIMIT   0x0B00
#define MAX7219_MODE_POWER        0x0C00
#define MAX7219_MODE_TEST         0x0F00
#define MAX7219_MODE_NOOP         0x0000

extern void app_InitMAX7219(void);
extern void app_TestMX7219(void);
extern void SPI_CS_ENABLE(void);
extern void SPI_CS_DISABLE(void);
#endif /* APP_MAX7219_H_ */
