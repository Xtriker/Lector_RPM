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

void app_Debounce(void)
{
	uint8_t Presionado = 0;
	while(HAL_GPIO_ReadPin(Boton_GPIO_Port, Boton_Pin) == GPIO_PIN_RESET)
	{
		delay_ms(10);
		TiempoPresionado = TiempoPresionado + 10;
		Presionado = 1;
	}
	if(TiempoPresionado >= OpcionDos)
	{
		HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		TiempoPresionado = 0;

	}
	else
	{
		if((TiempoPresionado <= OpcionUno) && (Presionado == 1))
			{
				HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
				TiempoPresionado = 0;
				Presionado = 0;

			}

	}

}

