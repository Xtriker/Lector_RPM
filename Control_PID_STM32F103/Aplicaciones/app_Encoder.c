/*
 * app_Encoder.c
 *
 *  Created on: 24 jun. 2020
 *      Author: dario
 */

#include "app_Encoder.h"


/* Variables gloables */
uint16_t Segundo = 0,Tercero = 0,Cuarto = 0,Quinto = 0;
uint32_t Primero = 0,Total = 0;
uint8_t ValorEncoder = 0;

void app_SeleccionEncoder(void)
{

	  switch(Aumento)
	  {
		  case 0:
		  {
			  if(app_LecturaEncoder() > 3)
			  {
				  Primero = 0;
				  ValorEncoder = 0;
				  HAL_TIM_Encoder_Stop_IT(&htim2, TIM_CHANNEL_ALL);
				  Total = Primero + Segundo;
			  }
			  else
			  {
				  Primero = app_LecturaEncoder() * 10000;
				  Total = Primero;
			  }
		  }break;
		  case 1:
		  {
			  if(Total > 35000)
			  {
				  Segundo = 0;
				  ValorEncoder = 0;
				  HAL_TIM_Encoder_Stop_IT(&htim2, TIM_CHANNEL_ALL);
				  Total = Primero + Segundo;
			  }
			  {
				  Segundo = app_LecturaEncoder()*1000;
				  Total = Primero + Segundo;
			  }
		  }break;
		  case 2:
		  {
			  if(Total > 35000)
			  {
				  Tercero = 0;
				  ValorEncoder = 0;
				  HAL_TIM_Encoder_Stop_IT(&htim2, TIM_CHANNEL_ALL);
				  Total = Primero + Segundo;
			  }
			  else
			  {
				  Tercero = app_LecturaEncoder()*100;
			  	  Total = Primero +Segundo+Tercero;
			  }
		  }break;
		  case 3:
		  {
			  if(Total > 35000)
			  {
				  Cuarto = 0;
				  ValorEncoder = 0;
				  HAL_TIM_Encoder_Stop_IT(&htim2, TIM_CHANNEL_ALL);
				  Total = Primero + Segundo;
			  }
			  else
			  {
				  Cuarto = app_LecturaEncoder()*10;
				  Total = Primero +Segundo+Tercero+Cuarto;
			  }
		  }break;
		  case 4:
		  {
			  if(Total > 35000)
			  {
				  Quinto = 0;
				  ValorEncoder = 0;
				  Total = Primero + Segundo;
			  }
			  else
			  {
				  Quinto = app_LecturaEncoder()*1;
				  Total = Primero +Segundo+Tercero+Cuarto+Quinto;
			  }
		  }break;
		  default:
		  {

		  }
	  }

}


void app_SeleccionarAngulo(void)
{

	  switch(Aumento)
	  {
		  case 0:
		  {
			  		  Primero = app_LecturaEncoder() * 10000;
			  		  Total = Primero;

		  }break;
		  case 1:
		  {

					  Segundo = app_LecturaEncoder() * 1000;
					  Total = Segundo + Primero;

		  }break;
		  case 3:
		  {

				  Tercero = app_LecturaEncoder() * 100;
				  Total = Primero + Segundo + Tercero;
		  	}break;
		  case 4:
   		  {
				  Cuarto = app_LecturaEncoder() * 10;
				  Total = Primero + Segundo + Tercero + Cuarto;
		   	}break;
	  	  	 case 5:
	 		  {
	  			  Quinto = app_LecturaEncoder() * 1;
	  			  Total = Primero + Segundo + Tercero + Cuarto + Quinto;
	  	  	}break;
		  default:
		  {

		  }
	  }
}

uint8_t app_LecturaEncoder(void)
{
	/* Inicia el Timer */
	HAL_TIM_Encoder_Start(&htim2, 36);

	/* Definicion de las variables */
	ValorEncoder = HAL_TIM_ReadCapturedValue(&htim2, TIM_CHANNEL_ALL)/4;

	/*Devuelve valor del encoder*/
	return ValorEncoder;

	/* Desabilita el Encoder */
	HAL_TIM_Encoder_Stop_IT(&htim2, TIM_CHANNEL_ALL);
}
