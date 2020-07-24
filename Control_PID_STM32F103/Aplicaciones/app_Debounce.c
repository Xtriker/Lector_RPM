/*
 * app_Debounce.c
 *
 *  Created on: 12 jun. 2020
 *      Author: Dario
 */
#include "app_Debounce.h"
#include "main.h"

uint16_t TiempoPresionado = 0, Total = 0, Primero = 0, Segundo = 0, Tercero = 0, Cuarto = 0;
volatile uint8_t Aumento = 0, Seleccion = 0;

enum{
	OpcionUno = 100,
	OpcionDos = 500
};

volatile uint8_t i= 0 ,a= 0;

void app_Debounce(uint16_t Boton[], uint8_t Numero_Botones)
{
	uint8_t Presionado[Numero_Botones];
	while(a < Numero_Botones + 1)
	{
	Presionado[a] = 0;
	a++;
	}

	while(HAL_GPIO_ReadPin(GPIOB, Boton[i]) == GPIO_PIN_RESET)
	{
		delay_us(50000);
		TiempoPresionado = TiempoPresionado + 100;
		Presionado[i] = 1;
	}

	if((TiempoPresionado <= OpcionUno) && (Presionado[i] == 1))
	{
		switch(i)
		{
			case 0:
			{
				TiempoPresionado = 0;
				Presionado[i] = 0;
				Aumento = 4;
			}break;
			case 1:
			{
				TiempoPresionado = 0;
				Presionado[i] = 0;

				if(Seleccion == 9)
				{
					Seleccion = 0;
				}
				else
				{
					Seleccion++;
				}
			}break;
			case 2:
			{
				TiempoPresionado = 0;
					Presionado[i] = 0;
				if(Seleccion == 0)
				{

					Seleccion = 9;
				}
				else
				{
					HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 0);
					Seleccion--;
				}
			}break;

		}
	}
	if((TiempoPresionado >= OpcionDos) && (Presionado[i] == 0))
	{
		switch(i)
		{
			case 0:
			{
				TiempoPresionado = 0;
				if(Aumento == 0)
				{
					Aumento = 4;
				}
				else
				{
					Aumento--;
				}
			}break;
			case 1:
			{
				TiempoPresionado = 0;
				Aumento = 0;
			}break;
			case 2:
			{
				TiempoPresionado = 0;
				if(Aumento == 4)
				{
					Aumento = 0;
				}
				else
				{
					Aumento++;
					HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
				}
			}break;
		}
	}
	else
	{
		if(i >= Numero_Botones)
		{
			i = 0;
		}
		else
		{
			i++;
			a = 0;
		}
	}


}

void app_SeleccionarAngulo(void)
{

	  switch(Aumento)
	  {
		  case 0:
		  {
			  Primero = Seleccion * 1000;
			  Total = Primero;
		  }break;
		  case 1:
		  {
			  Segundo = Seleccion * 100;
			  Total = Segundo + Primero;
		  }break;
		  case 2:
		  {
			  Tercero = Seleccion * 10;
			  Total = Primero + Segundo + Tercero;
		  	}break;
		  case 3:
   		  {
			  Cuarto = Seleccion;
			  Total = Primero + Segundo + Tercero + Cuarto;
		   	}break;
		  default:
		  {

		  }
	  }
}
//_week void app_Presionado(void)
//{
//
//}

