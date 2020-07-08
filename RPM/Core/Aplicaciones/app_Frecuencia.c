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
uint16_t Frecuencia[N_muestras],Frec_prom = 0,RPM = 0;

Estados seleccion = Inicio;

uint16_t incremento = 0,frecuencia = 0;
uint16_t app_ConteoFrecuencia(void)
{

	htim2.Instance->CNT = 0;
	while(htim2.Instance->CNT < 1000)
	{
		/* Espera el estado de flanco de subida */
		while(!(HAL_GPIO_ReadPin(Entrada_GPIO_Port, Entrada_Pin)));
		/* Espera el estado de flanco de bajada */
		while((HAL_GPIO_ReadPin(Entrada_GPIO_Port, Entrada_Pin)));
		incremento = incremento + 1;
	}
	return frecuencia = incremento;
	incremento = 0;

}

uint16_t app_PromedioFrecuencia(void)
{
	volatile uint16_t promedio = 0, suma = 0;
	volatile uint8_t contador =0;
	while(contador < N_muestras)
	{
		suma = suma + Frecuencia[contador];
		contador = contador + 1;
	}
	promedio = suma/N_muestras;
	return promedio;
}

uint16_t app_CalculoRPM(uint16_t promedio)
{
	volatile uint16_t RPM = 0;
	RPM = promedio*60;
	return RPM;
}

uint16_t app_LecturaPulsos(void)
{
	volatile uint16_t Lectura = 0;
	HAL_TIM_Base_Start_IT(&htim2);
	return Lectura = app_ConteoFrecuencia();
	HAL_TIM_Base_Stop_IT(&htim2);

}

void app_Tacometro(void)
{
	volatile uint8_t boton_evento,division = 1;
	boton_evento = app_Debounce();
	switch(seleccion)
	{
		case Inicio:
		{
			HAL_TIM_Base_Stop_IT(&htim2);
			while(n < N_muestras)
			{
				Frecuencia[n]= 0;
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
				Frecuencia[n] = app_ConteoFrecuencia()/division;
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


