/* Libreria realizada por Adrián Darío Díaz López */
/* Libreria necesaria para el funcionamiento de la libreria */
/* La libreria es para display de 7 segmentos de catodo comun
 * si se quiere usar para anodo es necesario cambiar los 0 por
 * los unos en la funcion app_NumeroA7Segmentos, app_SeleccionDisplay
 * app_FloatADisplay y app_LetrasADisplay.
 */
#include "app_Despliegue.h"

/* Variables globales */
uint8_t Bandera[]={0,0,0};


/* Conversion del valor numerico para 7 segmentos */
void app_NumeroA7Segmentos(uint32_t Numero,uint8_t TipoDisplay)
{
	switch(TipoDisplay)
	{
		case Anodo:
		{
			switch(Numero)
			{
				case 0:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);

				}break;
				case 1:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 2:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 3:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 4:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 5:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 6:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 7:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 8:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 9:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				default:
				{

					/*No hace nada */
				}
			}
		}break;
		case Catodo:
		{
			switch(Numero)
			{
				case 0:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);

				}break;
				case 1:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
				}break;
				case 2:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 3:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 4:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 5:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 6:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 7:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 8:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				case 9:
				{
					HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
					HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
					HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
					HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
					HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
					HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
					HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
				}break;
				default:
				{

					/*No hace nada */
				}
			}
		}break;
		default:{}
	}
}

/* Seleccion del display, su uso es para 4 displays de 7 segmentos */
/* Es necesario el usado de transistores */
void app_SeleccionDisplay(uint8_t Display, uint8_t TipoDisplay)
{
	switch(TipoDisplay)
	{
		case Anodo:
		{
			switch(Display)
			{
				case 0:
					{
						HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
						HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
						HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
						HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
						HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 0);
					}break;
				case 1:
					{
						HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
						HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
						HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
						HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
						HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 0);
					}break;
				case 2:
					{
						HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
						HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
						HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
						HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
						HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 0);
					}break;
				case 3:
					{
						HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
						HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
						HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
						HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
						HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 0);
					}break;
				case 4:
					{
						HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
						HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
						HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
						HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
						HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 1);
					}
				default:
				{
					/* Envia todos los displays a 1 logicos */
									}
			}
		}break;
		case Catodo:
		{
			switch(Display)
			{
					case 0:
						{
							HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
							HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
							HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
							HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
							HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 1);
						}break;
					case 1:
						{
							HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
							HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
							HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
							HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
							HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 1);
						}break;
					case 2:
						{
							HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
							HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
							HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
							HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
							HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 1);
						}break;
					case 3:
						{
							HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
							HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
							HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
							HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
							HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 1);
						}break;
					case 4:
						{
							HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
							HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
							HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
							HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
							HAL_GPIO_WritePin(Display_4_GPIO_Port, Display_4_Pin, 0);
						}break;
					default:
					{
						/* Envia todos los displays a 1 logicos */

					}
			}

		}break;
		default:
		{

		}
	}
}

/* Separacion de numero en unidades, decenas, centenas ... */
void app_Despliegue(uint32_t Numero,uint8_t TipoDisplay)
{
	uint32_t Primero  =  Numero % 10;
	uint32_t Segundo =  ( Numero - Primero ) % 100 / 10;
	uint32_t Tercero  =  ( Numero - Primero - Segundo ) % 1000 / 100;
	uint32_t Cuarto =  ( Numero - Primero - Segundo - Tercero ) % 10000 / 1000;
	uint32_t Quinto = (Numero - Primero - Segundo - Tercero - Cuarto) % 100000 / 10000;
	if(TipoDisplay == Anodo)
	{
		HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
	}
	else if(TipoDisplay == Catodo)
	{
		HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
	}
//	delay_us(65);
	app_SeleccionDisplay(0, TipoDisplay);
	app_NumeroA7Segmentos(Quinto,TipoDisplay);
	delay_us(800);
	app_SeleccionDisplay(1, TipoDisplay);
	app_NumeroA7Segmentos(Cuarto,TipoDisplay);
	delay_us(800);
	app_SeleccionDisplay(2, TipoDisplay);
	app_NumeroA7Segmentos(Tercero,TipoDisplay);
	delay_us(800);
	app_SeleccionDisplay(3, TipoDisplay);
	app_NumeroA7Segmentos(Segundo,TipoDisplay);
	delay_us(800);
	app_SeleccionDisplay(4, TipoDisplay);
	app_NumeroA7Segmentos(Primero,TipoDisplay);
	delay_us(800);
	if(Bandera[0] == 1)
	{
		app_SeleccionDisplay(0, TipoDisplay);
		app_NumeroA7Segmentos(Quinto,TipoDisplay);
		if(TipoDisplay == Anodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
		}
		else if(TipoDisplay == Catodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}

		delay_us(800);
	}
	if(Bandera[1] == 1)
	{
		app_SeleccionDisplay(1, TipoDisplay);
		if(TipoDisplay == Anodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
		}
		else if(TipoDisplay == Catodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}
		app_NumeroA7Segmentos(Cuarto,TipoDisplay);
		delay_us(800);
	}
	if(Bandera[2] == 1)
	{
		app_SeleccionDisplay(2, TipoDisplay);
		if(TipoDisplay == Anodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
		}
		else if(TipoDisplay == Catodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}
		app_NumeroA7Segmentos(Tercero,TipoDisplay);
		delay_us(800);
	}
	if(Bandera[3] == 1)
	{
		app_SeleccionDisplay(3, TipoDisplay);
		if(TipoDisplay == Anodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
		}
		else if(TipoDisplay == Catodo)
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}
		app_NumeroA7Segmentos(Segundo,TipoDisplay);
		delay_us(800);
	}



}

/* Conversion de datos flotantes a displays de 7 segmentos */
void app_FloatADisplay(float NumeroFlotante,uint8_t TipoDisplay)
{
	volatile int Numero = 0;


	if( (NumeroFlotante > 0.0) && (NumeroFlotante < 10.0))
		{
			Bandera[0] = 1;
			Bandera[1] = 0;
			Bandera[2] = 0;
			Bandera[3] = 0;
			Numero = NumeroFlotante * 10000;
		}
	else if( (NumeroFlotante > 10.0) && (NumeroFlotante < 100.0)) //54.87
		{
			Bandera[0] = 0;
			Bandera[1] = 1;
			Bandera[2] = 0;
			Bandera[3] = 0;
			Numero = NumeroFlotante * 1000; //5487
		}
	else if( (NumeroFlotante > 100.0) && (NumeroFlotante < 1000.0))
		{
			Bandera[0] = 0;
			Bandera[1] = 0;
			Bandera[2] = 1;
			Bandera[3] = 0;
			Numero = NumeroFlotante * 100;
		}
	else if( (NumeroFlotante > 1000.0) && (NumeroFlotante < 10000.0))
		{
			Bandera[0] = 0;
			Bandera[1] = 0;
			Bandera[2] = 0;
			Bandera[3] = 1;
			Numero = NumeroFlotante * 10;
		}
	app_Despliegue(Numero, TipoDisplay);

}

void app_IndicadorEstadoActual(uint8_t Display)
{
	switch(Aumento)
	{
		case 0:
		{
			app_SeleccionDisplay(0, Catodo);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}break;
		case 1:
		{
			app_SeleccionDisplay(1, Catodo);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}break;
		case 2:
		{
			app_SeleccionDisplay(2, Catodo);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}break;
		case 3:
		{
			app_SeleccionDisplay(3, Catodo);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}break;
		case 4:
		{
			app_SeleccionDisplay(0, Catodo);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 0);
		}break;
		default:
		{
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
		}
	}
}
/* Impresion de letras en display de 7 segmentos */
//void app_LetrasADisplay(char Letras)
//{
//	//volatile uint8_t i=0;
//	switch(Letras)
//		{
//			case 'A' | 'a':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//
//			}break;
//			case 'B' | 'b':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'C' | 'c':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
//			}break;
//			case 'D' | 'd':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'E' | 'e':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'F' | 'f':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'G' | 'g':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'H' | 'h':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'I' | 'i':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
//			}break;
//			case 'J' | 'j':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
//			}break;
//			case 'L' | 'l':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
//			}break;
//			case 'N' | 'n':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'O' | 'o':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'R' | 'r':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'S' | 's':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'T' | 'r':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			case 'U' | 'u':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 0);
//			}break;
//			case 'Y' | 'y':
//			{
//				HAL_GPIO_WritePin(Segmento_A_GPIO_Port, Segmento_A_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_B_GPIO_Port, Segmento_B_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_C_GPIO_Port, Segmento_C_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_D_GPIO_Port, Segmento_D_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_E_GPIO_Port, Segmento_E_Pin, 0);
//				HAL_GPIO_WritePin(Segmento_F_GPIO_Port, Segmento_F_Pin, 1);
//				HAL_GPIO_WritePin(Segmento_G_GPIO_Port, Segmento_G_Pin, 1);
//			}break;
//			default:
//			{
//				/*No hace nada */
//			}
//		}
//}
//
