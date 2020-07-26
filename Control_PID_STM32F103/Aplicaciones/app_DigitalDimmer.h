/*
 * app_DigitalDimmer.h
 *
 *  Created on: 9 jul. 2020
 *      Author: dario
 */

#ifndef APP_DIGITALDIMMER_H_
#define APP_DIGITALDIMMER_H_

#include "main.h"
#include "pid_controller.h"
#include "app_Delay.h"
#include "app_MAX7219.h"
#include "app_Debounce.h"

enum{
	  Inicio,
	  Ecuacion,
	  Dimmer,
	  PID
  }opcion;

extern void app_Dimmer(uint16_t Frecuencia);
extern void app_PIDDimmer(uint16_t Frecuencia);

#endif /* APP_DIGITALDIMMER_H_ */
