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

void app_Dimmer(uint16_t Frecuencia)
{
	 /* Variables locales en donde se guardara el tiempo */
	PIDInit(100, 400, 10, 1, 170, 20, DIRECT, AUTOMATIC);
	 switch(opcion)
		  {

			  case Ecuacion:
			  {


				  RPM_cal = Frecuencia*60;

				  Tiempo_activacion = (4.62962962e-5*Angulo)*1000000;

				  /* Pasa al siguiente estado */


				  opcion = Dimmer;
			  }
			  break;
			  case Dimmer:
			  {

				  /* Envia la variable Tiempo a la funcion cruce por cero */
				  app_CruceCero(Tiempo_activacion,RPM_cal);

				  /* Vuelve al estado inicial de la maquina de estados */

				  opcion = Lectura_RPM;
			  }break;
			  case Lectura_RPM:
			 {
				 PIDInputSet(3000);
				 PIDSetpointSet(RPM_cal);
				 PIDOutputLimitsSet(0, 180);
				 PIDCompute();
				 Angulo = PIDOutputGet();

				  /* Imprime la variable flotante Tiempo en el display de 7 segmentos */
				 //app_FloatADisplay(Tiempo_activacion, Catodo);

				 opcion = Ecuacion;
			 }break;
			  default:
			  {
				  /* Declaracion del primer estado del dimmer */
				  opcion = Ecuacion;
			  }
		  }
}
