/*
 * app_Frecuencia.h
 *
 *  Created on: Jun 8, 2020
 *      Author: dario
 */

#ifndef APP_FRECUENCIA_H_
#define APP_FRECUENCIA_H_

/* Librerias usadas para el programa */

#include <stdio.h>
#include <math.h>
#include "main.h"

/* Seleccion del microcontrolador
 * si no se encuentra el microcontrolador
 * colcar el suyo en la lista de abajo
 */
#if defined(STM32L4)
	#include "stm32l412xx.h"
	#include "stm32l4xx_hal.h"
	#include "stm32l4xx_hal_gpio.h"
	#include "stm32l4xx_hal_tim.h"
#elif defined(STM32F1)
	#include "stm32l103xb.h"
	#include "stm32f1xx_hal.h"
	#include "stm32f1xx_hal_gpio.h"
	#include "stm32f1xx_hal_tim.h"
#endif

/* Funciones globales */

extern uint32_t app_LecturaFrecuencia(void);
extern void app_Tacometro(void);
#endif /* APP_FRECUENCIA_H_ */
