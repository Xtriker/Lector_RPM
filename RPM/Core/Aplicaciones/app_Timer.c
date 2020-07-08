/*
 * app_Timer.c
 *
 *  Created on: 6 jul. 2020
 *      Author: Dario
 */



#include "app_Timer.h"

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim2;

void delay_ms(uint16_t ms)
{
	/* Colocar el valor del contador a 0, seleccionar el timer que se desea usar */
	__HAL_TIM_SET_COUNTER(&htim2,0);

	while(__HAL_TIM_GET_COUNTER(&htim2) < ms)
	{}
}

void delay_us(uint16_t us)
{
	/* Selecciona el valor del Timer en 0, antes de iniciar */
	__HAL_TIM_SET_COUNTER(&htim1,0);

	while(__HAL_TIM_GET_COUNTER(&htim1) < us)
	{}
	/* Saldra del ciclo hasta que se complete el tiempo de la funcion antes mandada */
}
