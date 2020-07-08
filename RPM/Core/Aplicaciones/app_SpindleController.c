/*
 * app_PID.c
 *
 *  Created on: 21 jun. 2020
 *      Author: Darío
 */

/* Libreria PID */

#include "app_SpindleController.h"

void app_SpindleController(void)
{
	estados cambio;
	cambio = Comienzo;
	/* Declaracion de las variables */
	volatile float Periodo;
	volatile uint16_t Tiempo, Frecuencia,Valor,RPM_ref;

	/* Se colocan los datos minimos de 0 hasta 180 por el angulo de fase */
	volatile float minOutput = 0, maxOutput = 180;
	volatile uint8_t boton_evento = app_Debounce();
	switch(cambio)
	{
		case Comienzo:
			{
				Periodo = 0; Tiempo = 0; Frecuencia = 0, RPM_ref = 0; Valor = 0;
				boton_evento = 0;
				/* Se inicializa el controlador PID */
				PIDInit(0.1, 100, 2, 2, minOutput, maxOutput, AUTOMATIC, DIRECT);
				cambio = Seleccion;
			}break;
		case Seleccion:
			{
				if(boton_evento == 1)
				{
					cambio = Comienzo;
				}
				else
				{
					/* Seleccion de los valores mediante el encoder */
					app_SeleccionEncoder();

					/* Imprime el valor elegido en el display de 7 segmentos */
					app_Despliegue(Total, Catodo);

					/* Cuando acaba cambia de estado */
					cambio = Lectura;
				}
			}break;
		case Lectura:
			{
				if(boton_evento == 1)
				{
					cambio = Seleccion;
				}
				else
				{
					/* Lectura de Frecuencia del encoder optico */
					Frecuencia = app_LecturaPulsos();

					/* Camculo de RPM */
					RPM_ref = app_CalculoRPM(Frecuencia);

					/* Cuando acaba cambia de estado */
					cambio = PID;
				}
			}break;
		case PID:
			{
				if(boton_evento == 1)
				{
					cambio = Seleccion;
				}
				else
				{
					 PIDSetpointSet(Total);
					 PIDInputSet(RPM_ref);
					 PIDCompute();
					 Valor = PIDOutputGet();
					 cambio = Salida;
				}
			}break;
		case Salida:
			{
				if(boton_evento == 1)
				{
					cambio = Seleccion;
				}
				else
				{
					/* Realiza el calculo del Periodo del detector por cero */
					Periodo = (0.0166/2)*1000;

					/* Realiza el calculo del tiempo necesario para el angulo de fase */
					Tiempo = ((Valor*Periodo)/180)*100;

					/* Envia el tiempo para la activacion de SCR */
					app_CruceCero(Tiempo);

					cambio = Lectura;
				}
			}break;
		default:
		{
			/* Regresa el valor de inicio */
			cambio = Comienzo;
		}
	}
}

