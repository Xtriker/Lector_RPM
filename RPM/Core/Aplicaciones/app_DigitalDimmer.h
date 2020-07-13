/*
 * app_DigitalDimmer.h
 *
 *  Created on: 9 jul. 2020
 *      Author: dario
 */

#ifndef APP_DIGITALDIMMER_H_
#define APP_DIGITALDIMMER_H_

#include "main.h"
#include "Librerias.h"
#include "app_Frecuencia.h"

enum{
	  Ecuacion,
	  Dimmer
  }opcion;



extern void app_Dimmer(void);
#endif /* APP_DIGITALDIMMER_H_ */
