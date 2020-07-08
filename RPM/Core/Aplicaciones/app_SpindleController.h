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
#include "main.h"

/* Funcion PID externa */

void app_SpindleController(void);

typedef enum
{
	Comienzo,
	Seleccion,
	Lectura,
	PID,
	Salida
}estados;

#endif /* APP_SPINDLECONTROLLER_H_ */
