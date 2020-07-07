/*
 * app_Timer.h
 *
 *  Created on: 6 jul. 2020
 *      Author: Dario
 */

#ifndef APP_TIMER_H_
#define APP_TIMER_H_



#include "main.h"
#include "stm32l4xx_hal_tim.h"

extern void delay_us(uint16_t us);
extern void delay_ms(uint16_t ms);

#endif /* APP_TIMER_H_ */
