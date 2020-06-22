/*
 * app_PID.c
 *
 *  Created on: 21 jun. 2020
 *      Author: Darío
 */

/* Libreria PID */
#include "app_PID.h"

uint8_t app_PID(float ref,float Kp, float Ki,float Kd, uint16_t input, uint16_t time)
{
	volatile float current_error = 0, previous_error = 0, integration_sum = 0;
	volatile uint16_t output = 0;

	current_error = ref - input;
	integration_sum = integration_sum + (current_error + time);
	previous_error = current_error;
	output = Kp * current_error + Ki * integration_sum + Kd + 1000 * (current_error - previous_error)/time;

	return output;
}

