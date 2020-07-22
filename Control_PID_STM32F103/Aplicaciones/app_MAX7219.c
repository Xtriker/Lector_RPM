/*
 * app_MAX7219.c
 *
 *  Created on: Jul 22, 2020
 *      Author: dario
 */

#include "app_MAX7219.h"

/*  ----------------------------
 * | Pin |  Label     | MAX pin |
 * | PA5 |	SPI1_SCK  |	CLK     |
 * | PA6 |	SP1_MISO  | NC      |
 * | PA7 |	SPI1_MOSI |	DIN     |
 * | PA4 | SOFT SLAVE |	CSS     |
 *  ----------------------------
 */

void SPI_CS_ENABLE(void)
{
	do{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	}while(0);
}

void SPI_CS_DISABLE(void)
{
	do{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	}while(0);
}
void SPI_Transmit(SPI_HandleTypeDef *hspi, uint16_t data) {
    // 2nd parameter - pData: pointer to data buffer
    HAL_SPI_Transmit(hspi, (uint8_t *) &data, 1, 1000);
}

void app_InitMAX7219(void)
{
    SPI_CS_ENABLE();
    SPI_Transmit(&hspi1, MAX7219_MODE_SCAN_LIMIT | 7);
    SPI_CS_DISABLE();

    SPI_CS_ENABLE();
    SPI_Transmit(&hspi1, MAX7219_MODE_INTENSITY | 0xF);
    SPI_CS_DISABLE();

    SPI_CS_ENABLE();
    SPI_Transmit(&hspi1, MAX7219_MODE_POWER | 0x1);
    SPI_CS_DISABLE();

    SPI_CS_ENABLE();
    SPI_Transmit(&hspi1, MAX7219_MODE_DECODE | 0);
    SPI_CS_DISABLE();
}

void app_TestMX7219(void)
{
	uint16_t col;
	int bit;

	        for (col = 0x100; col <= 0x800; col += 0x100)
	        {
	            for (bit = 7; bit >= 0; bit--)
	            {
	                SPI_CS_ENABLE();
	                SPI_Transmit(&hspi1, col | (1 << bit & 0xFF));
	                SPI_CS_DISABLE();
	                delay_ms(30);
	            }
	        }
}
