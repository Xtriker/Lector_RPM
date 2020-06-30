/*
 * app_Despliegue.h
 *
 *  Created on: Jun 5, 2020
 *      Author: dario
 */

#ifndef APP_DESPLIEGUE_H_
#define APP_DESPLIEGUE_H_
#endif /* APP_DESPLIEGUE_H_ */

/* Librerias usadas para el programa */

#include <stdio.h>
#include "main.h"

enum
{
	Anodo,
	Catodo
}Tipo;

/* Seleccion del microcontrolador
 * si no se encuentra el microcontrolador
 * colcar el suyo en la lista de abajo
 */
#if defined(STM32L4)
	#include "stm32l412xx.h"
	#include "stm32l4xx_hal.h"
	#include "stm32l4xx_hal_gpio.h"
#elif defined(STM32F1)
	#include "stm32f1xx.h"
	#include "stm32f1xx_hal.h"
	#include "stm32f1xx_hal_gpio.h"
#endif

/* Funciones externas */

extern void app_Despliegue(uint16_t Numero,uint8_t TipoDisplay);
extern void app_SeleccionDisplay(uint8_t Display,uint8_t TipoDisplay);
extern void app_FloatADisplay(float NumeroFlotante,uint8_t TipoDisplay);
//extern void app_LetrasADisplay(char Letras);


