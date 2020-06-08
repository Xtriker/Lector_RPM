#include "app_Despliegue.h"

/* Impresion de datos en display de 7 segmentos */

/* Colocando los valores en hexadecimal de los segmentos */
/* Numeros:		       0	1	2	 3	  4	   5	6	7	8	9	A	B	C	D	E	F  */
/* Vector:			   0	1	2	 3	  4	   5	6	7	8	9	10	11	12	13	14	15 */


void app_NumeroA7Segmentos(uint8_t Numero)
{
	/* BRR Indica un cero y BSRR indica un 1 */
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
}

void app_SeleccionDisplay(uint8_t Display)
{
	switch(Display)
	{
		case 0:
			{
				HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
				HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
				HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
				HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
			}break;
		case 1:
			{
				HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
				HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
				HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
				HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
			}break;
		case 2:
			{
				HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
				HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
				HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
				HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 0);
			}break;
		case 3:
			{
				HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 0);
				HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 0);
				HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 0);
				HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
			}break;
		default:
		{
			/* Envia todos los displays a cero */
			HAL_GPIO_WritePin(Display_0_GPIO_Port, Display_0_Pin, 1);
			HAL_GPIO_WritePin(Display_1_GPIO_Port, Display_1_Pin, 1);
			HAL_GPIO_WritePin(Display_2_GPIO_Port, Display_2_Pin, 1);
			HAL_GPIO_WritePin(Display_3_GPIO_Port, Display_3_Pin, 1);
		}
	}
}

void app_Despliegue(uint16_t Numero)
{
	uint8_t Primero  =  Numero % 10;
	uint8_t Segundo =  ( Numero - Primero ) % 100 / 10;
	uint8_t Tercero  =  ( Numero - Primero - Segundo ) % 1000 / 100;
	uint8_t Cuarto =  ( Numero - Primero - Segundo - Tercero ) % 10000 / 1000;

	app_SeleccionDisplay(0);
	app_NumeroA7Segmentos(Cuarto);
	HAL_Delay(3);
	app_SeleccionDisplay(1);
	app_NumeroA7Segmentos(Tercero);
	HAL_Delay(3);
	app_SeleccionDisplay(2);
	app_NumeroA7Segmentos(Segundo);
	HAL_Delay(3);
	app_SeleccionDisplay(3);
	app_NumeroA7Segmentos(Primero);
	HAL_Delay(3);
}

void app_FloatADisplay(float NumeroFlotante) //125.8
{
	volatile int Numero = 0;

	if( (NumeroFlotante > 0.0) && (NumeroFlotante < 10.0))
		{
			app_SeleccionDisplay(3);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
			Numero = NumeroFlotante * 1000;
		}
	else if( (NumeroFlotante > 10.0) && (NumeroFlotante < 100.0)) //54.87
		{
			app_SeleccionDisplay(2);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1); //1
			Numero = NumeroFlotante * 100; //5487
		}
	else if( (NumeroFlotante > 100.0) && (NumeroFlotante < 1000.0))
		{
			app_SeleccionDisplay(1);
			HAL_GPIO_WritePin(Segmento_H_GPIO_Port, Segmento_H_Pin, 1);
			Numero = NumeroFlotante * 10;
		}
	app_Despliegue(Numero);

}
