/*
 * app_Encoder.h
 *
 *  Created on: 24 jun. 2020
 *      Author: dario
 */

#ifndef APP_ENCODER_H_
#define APP_ENCODER_H_


#include "main.h"
#include "app_Debounce.h"

TIM_HandleTypeDef htim2;

/*  ----------------
 * | TIM2_CH1 | PA0 |
 * | TIM2_CH2 | PA1 |
 *  ________________
 */

extern uint8_t app_LecturaEncoder(void);
extern void app_SeleccionEncoder(void);
extern void app_SeleccionarAngulo(void);

/* Variables gloables */
extern uint16_t Segundo,Tercero,Cuarto;
extern uint32_t Primero,Total;
#endif /* APP_ENCODER_H_ */
