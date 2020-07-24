/*
 * app_DigitalDimmer.c
 *
 *  Created on: 9 jul. 2020
 *      Author: dario
 */

/* Libreria principal */
#include "app_DigitalDimmer.h"

TIM_HandleTypeDef htim2;

float Tiempo_activacion = 0, Angulo = 0;
float RPM_cal = 0;

void app_CruceCero(float Tiempo_activacion)
{
	if(Bandera_DetectorCero == 0)
	{
		delay_us(Tiempo_activacion);
		HAL_GPIO_WritePin(SSR_GPIO_Port, SSR_Pin, 1);
		delay_us(10);
		HAL_GPIO_WritePin(SSR_GPIO_Port, SSR_Pin, 0);
	}
}

void app_Dimmer(uint16_t Frecuencia)
{
	PIDInit(100, 400, 10, 1, 170, 20, DIRECT, AUTOMATIC);

	 switch(opcion)
		  {
			  case Ecuacion:
			  {

				  RPM_cal = Frecuencia*60;

				  Tiempo_activacion = (4.62962962e-5*Angulo)*1000000;

				  opcion = Dimmer;
			  }
			  break;
			  case Dimmer:
			  {
				  app_CruceCero(Tiempo_activacion);

				  opcion = Lectura_RPM;
			  }break;
			  case Lectura_RPM:
			 {
				 PIDInputSet(3000);
				 PIDSetpointSet(RPM_cal);
				 PIDOutputLimitsSet(0, 180);
				 PIDCompute();
				 Angulo = PIDOutputGet();

				 opcion = Ecuacion;
			 }break;
			  default:
			  {
				  opcion = Ecuacion;
			  }
		  }
}

