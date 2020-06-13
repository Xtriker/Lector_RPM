/*
 * app_Frecuencia.c
 *
 *  Created on: Jun 8, 2020
 *      Author: dario
 */

 /* Librerias del programa */

#include "app_Frecuencia.h"

#define N_muestras (uint16_t)50
/* Declaracion de la enumeracion */

typedef enum{
	 Inicio,
	 Cuenta,
	 Calculo,
	 Despliegue
}Estados;

/* Variables globales */
uint8_t n = 0;
uint16_t Frecuencia[N_muestras],Frec_prom = 0,RPM = 0;

Estados seleccion = Inicio;

uint16_t app_PromedioFrecuencia(uint16_t Frecuencia[])
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

void app_Tacometro(void)
{
	volatile uint8_t boton_evento;
	boton_evento = app_Debounce();
	switch(seleccion)
	{
		case Inicio:
		{
			app_Despliegue(0);
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
				while(n < N_muestras)
				{
				Frecuencia[n] = app_ConteoFrecuencia();
				n = n + 1;
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
				Frec_prom = app_PromedioFrecuencia(Frecuencia);
				RPM = app_CalculoRPM(Frec_prom);
				seleccion = Despliegue;
			}

		}break;
		case Despliegue:
		{
			if(boton_evento == 1)
			{
				seleccion = Inicio;
			}
			else
			{
				app_Despliegue(RPM);
			}
		}break;
		default:
			{

			}
	}
}
/* Declaracion de las funciones */


