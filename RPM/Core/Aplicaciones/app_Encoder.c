/*
 * app_Encoder.c
 *
 *  Created on: 24 jun. 2020
 *      Author: dario
 */

#include "app_Encoder.h"


/* Variables gloables */
uint16_t Primero = 0,Segundo = 0,Tercero = 0,Cuarto = 0,Quinto = 0, Total = 0;

uint8_t app_LecturaEncoder(void)
{
	/* Inicia el Timer de bajo consumo */
	HAL_LPTIM_Encoder_Start(&hlptim1, 36);

	/* Definicion de las variables */
	volatile uint8_t ValorEncoder = 0;

	/* Lectura del valor del encoder */
	ValorEncoder = HAL_LPTIM_ReadCounter(&hlptim1)/4;


	/*Devuelve valor del encoder*/
	return ValorEncoder;

	/* Desabilita el Encoder */
		HAL_LPTIM_Encoder_Stop(&hlptim1);
}

void app_SeleccionEncoder(void)
{
	if(Aumento > 4)
		  {
			  Aumento = 0;
		  }
		  else
		  {
			  switch(Aumento)
			  {
				  case 0:
				  {
					  Primero = app_LecturaEncoder()*10000;
					  Total = Primero;
				  }break;
				  case 1:
				  {
					  Segundo = app_LecturaEncoder()*1000;
					  Total = Primero +Segundo;
				  }break;
				  case 2:
				  {
					  Tercero = app_LecturaEncoder()*100;
					  Total = Primero +Segundo+Tercero;
				  }break;
				  case 3:
				  {
					  Cuarto = app_LecturaEncoder()*10;
					  Total = Primero +Segundo+Tercero+Cuarto;
				  }break;
				  case 4:
				  {
					  Quinto = app_LecturaEncoder()*1;
					  Total = Primero +Segundo+Tercero+Cuarto+Quinto;
				  }break;
				  default:
				  {

				  }
			  }
		  }
}

