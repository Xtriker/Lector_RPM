/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
extern uint16_t app_ConteoFrecuencia(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Boton_azul_Pin GPIO_PIN_13
#define Boton_azul_GPIO_Port GPIOC
#define Boton_azul_EXTI_IRQn EXTI15_10_IRQn
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define Segmento_B_Pin GPIO_PIN_1
#define Segmento_B_GPIO_Port GPIOC
#define Segmento_C_Pin GPIO_PIN_2
#define Segmento_C_GPIO_Port GPIOC
#define Segmento_D_Pin GPIO_PIN_0
#define Segmento_D_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SMPS_EN_Pin GPIO_PIN_4
#define SMPS_EN_GPIO_Port GPIOA
#define SMPS_V1_Pin GPIO_PIN_5
#define SMPS_V1_GPIO_Port GPIOA
#define Segmento_E_Pin GPIO_PIN_4
#define Segmento_E_GPIO_Port GPIOC
#define LD4_Pin GPIO_PIN_13
#define LD4_GPIO_Port GPIOB
#define Segmento_F_Pin GPIO_PIN_6
#define Segmento_F_GPIO_Port GPIOC
#define Segmento_G_Pin GPIO_PIN_7
#define Segmento_G_GPIO_Port GPIOC
#define Segmento_H_Pin GPIO_PIN_8
#define Segmento_H_GPIO_Port GPIOC
#define Segmento_A_Pin GPIO_PIN_8
#define Segmento_A_GPIO_Port GPIOA
#define Display_0_Pin GPIO_PIN_10
#define Display_0_GPIO_Port GPIOA
#define Display_1_Pin GPIO_PIN_12
#define Display_1_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define Detener_Pin GPIO_PIN_10
#define Detener_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Display_3_Pin GPIO_PIN_4
#define Display_3_GPIO_Port GPIOB
#define Display_2_Pin GPIO_PIN_5
#define Display_2_GPIO_Port GPIOB
#define Entrada_Pin GPIO_PIN_6
#define Entrada_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
