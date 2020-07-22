/*
 * app_Debounce.c
 *
 *  Created on: 12 jun. 2020
 *      Author: Dario
 */
#include "app_Debounce.h"

volatile uint16_t TiempoPresionado = 0;
volatile uint8_t Aumento = 0;

enum{
	OpcionUno = 100,
	OpcionDos = 200
};

void app_Debounce(void)
{
	uint8_t Presionado = 0;
	while(HAL_GPIO_ReadPin(Boton_GPIO_Port, Boton_Pin) == GPIO_PIN_RESET)
	{
		delay_ms(100);
		TiempoPresionado = TiempoPresionado + 100;
		Presionado = 1;
	}
	if(Aumento == 6)
	{
		Aumento = 0;
	}
	if(TiempoPresionado >= OpcionDos)
	{
		HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		TiempoPresionado = 0;
		Aumento++;
	}
	else
	{
		if((TiempoPresionado <= OpcionUno) && (Presionado == 1))
			{
				HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
				TiempoPresionado = 0;
				Presionado = 0;
				Aumento = 0;
			}

	}

}

