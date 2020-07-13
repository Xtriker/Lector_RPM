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
	 static float Tiempo = 0, Angulo = 2;
	 uint16_t Lectura = 0;

	 switch(opcion)
		  {
			  case Ecuacion:
			  {
				  /* Linea de tendencia determinadad mediante los dato capturados */
				  /* Convierte angulo de fase en tiempo, este tiempo es necesario para
				   * la correcta activacion del SCR */

				  Tiempo = (4.62962962e-5*Angulo)*1000;

				  /* Imprime la variable flotante Tiempo en el display de 7 segmentos */
				  //app_FloatADisplay(Tiempo, Catodo);
				  /* Pasa al siguiente estado */

				  printf("%d\n\r",Lectura);
				  opcion = Dimmer;
			  }
			  break;
			  case Dimmer:
			  {

				  /* Envia la variable Tiempo a la funcion cruce por cero */
				  app_CruceCero(Tiempo);
				  /* Vuelve al estado inicial de la maquina de estados */
				  if(Flag == 0)
				  {
					  opcion = Ecuacion;
				  }
			  }break;
			  default:
			  {
				  /* Declaracion del primer estado del dimmer */
				  opcion = Ecuacion;
			  }
		  }
}
