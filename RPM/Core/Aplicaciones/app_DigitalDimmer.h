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
#include "pid_controller.h"

enum{
	  Ecuacion,
	  Dimmer,
	  Lectura_RPM
  }opcion;



extern void app_Dimmer(uint16_t Frecuencia);
#endif /* APP_DIGITALDIMMER_H_ */
