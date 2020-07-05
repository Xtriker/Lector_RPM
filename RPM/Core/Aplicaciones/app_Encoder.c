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
				  HAL_LPTIM_Encoder_Stop(&hlptim1);
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
				  HAL_LPTIM_Encoder_Stop(&hlptim1);
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
				  HAL_LPTIM_Encoder_Stop(&hlptim1);
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
				  HAL_LPTIM_Encoder_Stop(&hlptim1);
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
				  HAL_LPTIM_Encoder_Stop(&hlptim1);
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


float app_SeleccionarAngulo(void)
{
	volatile float Angulo = 0;
	volatile uint8_t Prnumero = 0, Senumero = 0,Tenumero = 0;
	  switch(Aumento)
	  {
		  case 0:
		  {
			  	  if(app_LecturaEncoder() > 1)
			  	  {
			  		 Primero = Primero - 1;
			  		 Prnumero = 0;
			  		 HAL_LPTIM_Encoder_Stop(&hlptim1);
			  		 Angulo = Primero;
			  		 Total = Prnumero;
			  	  }
			  	  else
			  	  {
			  		  Primero = app_LecturaEncoder();
			  		  Prnumero = app_LecturaEncoder() * 100;
			  		  Total = Prnumero;
				  	  Angulo = Primero;
			  	  }
		  }break;
		  case 1:
		  {
			  if(Angulo > 18)
			  {
				 Segundo = Segundo - 1;
				 Senumero = 0;
				 HAL_LPTIM_Encoder_Stop(&hlptim1);
				 Angulo = Primero + Segundo;
				 Total = Prnumero + Senumero;
			  }
			  else
			  {
					  Segundo = app_LecturaEncoder();
					  Senumero = app_LecturaBoton() * 10;
					  Angulo = Primero + Segundo;
					  Total = Senumero + Primero;
			  }
		  }break;
		  case 3:
		  {
			  if(Angulo > 180)
			  {
				 Tercero = 0;
				 Tenumero = 0;
				 HAL_LPTIM_Encoder_Stop(&hlptim1);
				 Angulo = Primero + Segundo + Tercero;
				 Total = Prnumero + Senumero + Tenumero;
			  }
			  else
			  {
				  Tercero = app_LecturaEncoder();
				  Tenumero = app_LecturaEncoder() * 1;
				  Angulo = Primero + Segundo + Tercero;
				  Total = Prnumero + Senumero + Tenumero;
			  }
		  	}break;
		  default:
		  {

		  }
	  }
	  return Angulo;

}
uint8_t app_LecturaEncoder(void)
{
	/* Inicia el Timer de bajo consumo */
	HAL_LPTIM_Encoder_Start(&hlptim1, 36);

	/* Definicion de las variables */
	ValorEncoder = HAL_LPTIM_ReadCounter(&hlptim1)/4;

	/*Devuelve valor del encoder*/
	return ValorEncoder;

	/* Desabilita el Encoder */
	HAL_LPTIM_Encoder_Stop(&hlptim1);
}
