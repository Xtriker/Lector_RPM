/*
 * app_PID.h
 *
 *  Created on: 21 jun. 2020
 *      Author: Darío
 */

#ifndef APP_SPINDLECONTROLLER_H_
#define APP_SPINDLECONTROLLER_H_

/*Libreria universal */
#include "Librerias.h"
#include "app_Debounce.h"
#include "Macros.h"
#include "pid_controller.h"

/* Funcion PID externa */

void app_SpindleController(uint8_t boton_evento);

//typedef enum
//{
//	Inicio,
//	Seleccion,
//	Cuenta,
//	Calculo,
//	PID,
//	Salida
//}estados;

#endif /* APP_SPINDLECONTROLLER_H_ */
