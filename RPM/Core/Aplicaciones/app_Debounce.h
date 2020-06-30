/*
 * app_Debounce.h
 *
 *  Created on: 12 jun. 2020
 *      Author: Dario
 */


/* Librerias usadas para el programa */

#include <stdio.h>
#include "main.h"
#include "../stm32l4xx_hal_gpio.h"
#include "../stm32l4xx_hal_tim.h"

/* Seleccion del microcontrolador
 * si no se encuentra el microcontrolador
 * colcar el suyo en la lista de abajo
 */
#if defined(STM32L4)
	#include "stm32l412xx.h"
	#include "stm32l4xx_hal.h"
	#include "stm32l4xx_hal_gpio.h"
#elif defined(STM32F1)
	#include "stm32fxx.h"
	#include "stm32f1xx_hal.h"
	#include "stm32f1xx_hal_gpio.h"
#endif

extern uint8_t app_Debounce(void);
