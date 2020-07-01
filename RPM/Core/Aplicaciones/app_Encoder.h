/*
 * app_Encoder.h
 *
 *  Created on: 24 jun. 2020
 *      Author: dario
 */

#ifndef APP_ENCODER_H_
#define APP_ENCODER_H_


#include "main.h"


LPTIM_HandleTypeDef hlptim1;

extern uint8_t app_LecturaEncoder(void);
extern void app_SeleccionEncoder(void);

/* Variables gloables */
extern uint16_t Segundo,Tercero,Cuarto;
extern uint32_t Primero,Total;
#endif /* APP_ENCODER_H_ */
