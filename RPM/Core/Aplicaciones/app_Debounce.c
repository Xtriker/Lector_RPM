/*
 * app_Debounce.c
 *
 *  Created on: 12 jun. 2020
 *      Author: Dario
 */
#include "app_Debounce.h"
enum{
	Presionado,
	Presionado_largo,
	No_presionado
}estados_debounce;


void app_Debounce(uint8_t estado)
{
	switch(estado)
	{
		case Presionado:
		{
			if(Aumento >= 6)
			{
				Aumento = 0;
			}
			else
			{
				HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
				Aumento++;
			}
		}break;
		case Presionado_largo:
		{

		}break;
		case No_presionado:
		{

		}break;
		default:
		{
			estados_debounce = No_presionado;
		}
	}
}

