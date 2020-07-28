/*
 * app_DigitalDimmer.c
 *
 *  Created on: 9 jul. 2020
 *      Author: dario
 */

/* Libreria principal */
#include "app_DigitalDimmer.h"

TIM_HandleTypeDef htim2;

float Tiempo_activacion = 0, Angulo = 0;
float RPM_cal = 0;
uint16_t Boton[3] = {0x1000, 0x2000, 0x4000};
uint8_t Bandera = 0;
void app_CruceCero(float Tiempo_activacion)
{
	if(Bandera_DetectorCero == 0)
	{
		delay_us(Tiempo_activacion);
		HAL_GPIO_WritePin(SSR_GPIO_Port, SSR_Pin, 1);
		delay_us(10);
		HAL_GPIO_WritePin(SSR_GPIO_Port, SSR_Pin, 0);
		Bandera_DetectorCero = 1;
	}
}

void app_Dimmer(uint16_t Frecuencia)
{
	 switch(opcion)
		  {
			 case Debounce:
			 {
				 if((Aumento == 4) && (Bandera == 0))
				 {
					  opcion = Ecuacion;
				 }
				 else
				 {
					app_Debounce(Boton, 2);

					if (Bandera == 0)
					{
						opcion = Inicio;
					}
					else
					{
						opcion = Ecuacion;
					}
				 }
			 }break;
			  case Inicio:
			  {
					  app_SeleccionarAngulo();

					  app_NumeroAMAX7219(Total, 4);

					  if(Bandera == 0)
					  {
						 opcion = Debounce;
					  }
					  else if(Bandera == 1)
					  {
						 opcion = Ecuacion;
					  }
			  }
			  break;
			  case Ecuacion:
			  {
				  if(Aumento == 1)
				  {
					  opcion = Debounce;

					  Bandera = 0;

					  app_LimpiarDisplay(0x00);
				  }
				  else
				  {
					  RPM_cal = Frecuencia*60;

					  Tiempo_activacion = (4.62962962e-5*Total)*1000000;

					  opcion = Dimmer;
				  }
			  }
			  break;
			  case Dimmer:
			  {
				  if(Aumento == 1)
				  {
					  opcion = Inicio;

					  Bandera = 0;

					  app_LimpiarDisplay(0x00);
				  }
				  else
				  {
					  app_CruceCero(Tiempo_activacion);

					  Bandera = 1;

					  opcion = Debounce;
				  }
			  }break;
			  default:
			  {
				  opcion = Debounce;
				  app_LimpiarDisplays();
			  }
		  }
}

void app_PIDDimmer(uint16_t Frecuencia)
{
	 switch(opcion)
		  {
			  case Inicio:
			  {
				  if(Aumento == 4)
				  {
					  app_LimpiarDisplays();
					  opcion = Ecuacion;
				  }
				  else
				  {
					  app_Debounce(Boton, 2);

					  app_SeleccionarAngulo();

					  app_NumeroAMAX7219(Total, 4);
				  }
			  }
			  break;
			  case Ecuacion:
			  {
				  if(Aumento == 0)
				  {
					  app_LimpiarDisplays();
					  opcion = Inicio;
				  }
				  else
				  {
					  RPM_cal = Frecuencia*60;

					  Tiempo_activacion = (4.62962962e-5*Angulo)*1000000;

					  opcion = Dimmer;
				  }
			  }
			  break;
			  case Dimmer:
			  {
				  if(Aumento == 0)
				  {
					  app_LimpiarDisplays();
					  opcion = Inicio;
				  }
				  else
				  {
					  app_CruceCero(Tiempo_activacion);

					  opcion = PID;
				  }
			  }break;
			  case PID:
			 {
				 if(Aumento == 0)
				 {
					 app_LimpiarDisplays();
					 opcion = Inicio;
				 }
				 else
				 {
					 PIDInputSet(Total);

					 PIDSetpointSet(RPM_cal);

					 PIDOutputLimitsSet(0, 160);

					 PIDCompute();

					 Angulo = - (PIDOutputGet()) + 160;

					 opcion = Ecuacion;
				 }
			 }break;
			  default:
			  {
				  PIDInit(100, 400, 10, 1, 160, 20, DIRECT, AUTOMATIC);
				  opcion = Inicio;
			  }
		  }
}

