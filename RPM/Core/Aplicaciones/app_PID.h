/*
 * app_PID.h
 *
 *  Created on: 21 jun. 2020
 *      Author: Darío
 */

#ifndef APP_PID_H_
#define APP_PID_H_

/*Libreria universal */
#include "Librerias.h"

/* Funcion PID externa */

extern uint8_t app_PID(float ref,float Kp, float Ki,float Kd, uint16_t input, uint16_t time);

#endif /* APP_PID_H_ */
