/*
 * app_Frecuencia.c
 *
 *  Created on: Jun 8, 2020
 *      Author: dario
 */

 /* Librerias del programa */

#include "app_Frecuencia.h"

#define N_muestras (uint16_t)10
/* Declaracion de la enumeracion */

typedef enum{
	 Inicio,
	 Cuenta,
	 Calculo,
	 Despliegue
}Estados;

TIM_HandleTypeDef htim2;

/* Variables globales */
uint8_t n = 0;
uint16_t Frec_prom = 0,RPM = 0;

Estados seleccion = Inicio;

uint16_t incremento = 0,frecuencia = 0;
uint8_t Flag = 0, Captura = 0,Estado_debounce = 0;
uint32_t Primer_valor = 0, Segundo_valor = 0, Tiempo = 0,Debounce_us = 0;

uint16_t app_PromedioFrecuencia(void)
{
	volatile uint16_t promedio = 0, suma = 0;
	volatile uint8_t contador =0;
	while(contador < N_muestras)
	{
		suma = suma ;
		contador = contador + 1;
	}
	promedio = suma/N_muestras;
	return promedio;
}

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{

	if (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_2)  // if the interrupt source is channel2
	{
		if (Captura==0) // if the first value is not captured
		{
			Primer_valor = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL_2); // read the first value
			Captura = 1;  // set the first captured as true
			// Now change the polarity to falling edge
			__HAL_TIM_SET_CAPTUREPOLARITY(htim, TIM_CHANNEL_2, TIM_INPUTCHANNELPOLARITY_FALLING);
		}

		else if (Captura==1)   // if the first is already captured
		{
			Segundo_valor = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL_2);  // read second value
			__HAL_TIM_SET_COUNTER(htim, 0);  // reset the counter

			if (Segundo_valor > Primer_valor)
			{
				Tiempo = Segundo_valor+Primer_valor;
			}

			Captura = 0; // set it back to false

			// set polarity to rising edge
			__HAL_TIM_SET_CAPTUREPOLARITY(htim, TIM_CHANNEL_2, TIM_INPUTCHANNELPOLARITY_RISING);


		}
	}
	if (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_4)
	{
		Debounce_us = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL_4);
		__HAL_TIM_SET_COUNTER(htim, 0);
		if(Debounce_us == 100000)
		{
			app_Debounce(0);
		}
		else if(Debounce_us >= 1000000)
		{
			app_Debounce(1);
		}
		else
		{
			app_Debounce(3);
		}
	}

}

uint16_t app_CalculoRPM(uint16_t promedio)
{
	volatile uint16_t RPM = 0;
	RPM = promedio*60;
	return RPM;
}


void app_Tacometro(void)
{
	volatile uint8_t boton_evento,division = 1;
	switch(seleccion)
	{
		case Inicio:
		{
			HAL_TIM_Base_Stop_IT(&htim2);
			while(n < N_muestras)
			{
				n = n + 1;
			}
			n = 0;
			division = 0;
			Frec_prom = 0;
			RPM = 0;
			seleccion = Cuenta;
		}break;
		case Cuenta:
		{
			if(boton_evento == 1)
			{
				seleccion = Inicio;
			}
			else
			{
				HAL_TIM_Base_Start_IT(&htim2);
				while(n < N_muestras)
				{
				n = n + 1;
				division = division + 1;
				}
				seleccion = Calculo;
			}
		}break;
		case Calculo:
		{
			if(boton_evento == 1)
			{
				seleccion = Inicio;
			}
			else
			{
				Frec_prom = app_PromedioFrecuencia();
				RPM = app_CalculoRPM(Frec_prom);
				seleccion = Despliegue;
			}

		}break;
		break;
		case Despliegue:
		{
			if(boton_evento == 1)
			{
				seleccion = Inicio;
			}
			else
			{
				app_Despliegue(RPM, Anodo);
				HAL_TIM_Base_Stop_IT(&htim2);
				seleccion = Cuenta;
			}
		}break;
		default:
			{

			}
	}
}
/* Declaracion de las funciones */


