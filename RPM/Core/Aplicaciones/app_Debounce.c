/*
 * app_Debounce.c
 *
 *  Created on: 12 jun. 2020
 *      Author: Dario
 */
#include "app_Debounce.h"

volatile uint16_t TiempoPresionado = 0;

enum{
	OpcionUno = 100,
	OpcionDos = 200
};

estado app_Debounce(void)
{
	estado PresionadoBoton;
	while(HAL_GPIO_ReadPin(Boton_encoder_GPIO_Port, Boton_encoder_Pin) == GPIO_PIN_RESET)
	{
		delay_ms(100);
		TiempoPresionado = TiempoPresionado + 100;
	}

	if(TiempoPresionado >= OpcionUno)
	{
		HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
		PresionadoBoton = Normal;
	}
	else if(TiempoPresionado >= OpcionDos)
	{
		HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
		PresionadoBoton = Mantenido;
	}
	else
	{
		PresionadoBoton = Nopresionado;
	}
	return PresionadoBoton;
}

