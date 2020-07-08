/*
 * app_Debounce.c
 *
 *  Created on: 12 jun. 2020
 *      Author: Dario
 */
#include "app_Debounce.h"

typedef enum{
	NO_PRESIONADO,
	PRESIONADO
}Presionado_boton;

Presionado_boton estado = NO_PRESIONADO;

uint8_t boton = 0,contador = 0;
void app_LecturaBoton(void)
{
		delay_ms(7);
		boton = HAL_GPIO_ReadPin(Detener_GPIO_Port, Detener_Pin);
		if(boton == 0)
		{
			contador = contador + 1;
		}
		if(contador == 20)
		{
			contador = 0;
			estado = PRESIONADO;
		}
		else
		{
			estado = NO_PRESIONADO;
		}
}

uint8_t app_Debounce(void)
{
	volatile uint8_t Presionado = 0;
	app_LecturaBoton();
	switch(estado)
	{
		case NO_PRESIONADO:
		{
			/* No realiza nada */
			Presionado = 0;
		}break;
		case PRESIONADO:
		{
			Presionado = 1;
		}break;
		default:
		{

		}
	}
	return Presionado;
}

