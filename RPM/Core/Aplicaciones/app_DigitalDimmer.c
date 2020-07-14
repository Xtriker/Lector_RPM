/*
 * app_DigitalDimmer.c
 *
 *  Created on: 9 jul. 2020
 *      Author: dario
 */

/* Libreria principal */
#include "app_DigitalDimmer.h"

TIM_HandleTypeDef htim2;

void app_Dimmer(void)
{
	 /* Variables locales en donde se guardara el tiempo */
	 static float Tiempo_activacion = 0, Angulo = 140;
	 uint16_t Frecuencia = 0, RPM = 0;

	 switch(opcion)
		  {

			  case Ecuacion:
			  {
				  /* Linea de tendencia determinadad mediante los dato capturados */
				  /* Convierte angulo de fase en tiempo, este tiempo es necesario para
				   * la correcta activacion del SCR */


				  Tiempo_activacion = (4.62962962e-5*Angulo)*1000000;

				  /* Pasa al siguiente estado */


				  opcion = Dimmer;
			  }
			  break;
			  case Dimmer:
			  {

				  /* Envia la variable Tiempo a la funcion cruce por cero */
				  app_CruceCero(Tiempo_activacion);

				  /* Vuelve al estado inicial de la maquina de estados */

				  opcion = Lectura_RPM;
			  }break;
			  case Lectura_RPM:
			 {
				 Frecuencia = (1/Tiempo)*1000000;

				 RPM = app_CalculoRPM(Frecuencia);

				  /* Imprime la variable flotante Tiempo en el display de 7 segmentos */
				 app_Despliegue(RPM, Catodo);

				 opcion = Ecuacion;
			 }break;
			  default:
			  {
				  /* Declaracion del primer estado del dimmer */
				  opcion = Ecuacion;
			  }
		  }
}
