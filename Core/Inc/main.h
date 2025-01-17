/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RELAY_Pin                    GPIO_PIN_15
#define RELAY_GPIO_Port              GPIOC
#define AS_COMPUTER_FB_Pin           GPIO_PIN_3
#define AS_COMPUTER_FB_GPIO_Port     GPIOC
#define MUX_FB_OUT_Pin               GPIO_PIN_0
#define MUX_FB_OUT_GPIO_Port         GPIOA
#define MUX_HALL_Pin                 GPIO_PIN_1
#define MUX_HALL_GPIO_Port           GPIOA
#define VREF_ADC_Pin                 GPIO_PIN_2
#define VREF_ADC_GPIO_Port           GPIOA
#define BATT_OUT_ANALOG_FB_Pin       GPIO_PIN_3
#define BATT_OUT_ANALOG_FB_GPIO_Port GPIOA
#define PUMP_L_Pin                   GPIO_PIN_4
#define PUMP_L_GPIO_Port             GPIOA
#define PUMP_R_Pin                   GPIO_PIN_5
#define PUMP_R_GPIO_Port             GPIOA
#define REAY_OUT_ANALOG_FB_Pin       GPIO_PIN_4
#define REAY_OUT_ANALOG_FB_GPIO_Port GPIOC
#define LVMS_OUT_ANALOG_FB_Pin       GPIO_PIN_5
#define LVMS_OUT_ANALOG_FB_GPIO_Port GPIOC
#define HV_FANS_Pin                  GPIO_PIN_0
#define HV_FANS_GPIO_Port            GPIOB
#define AARB_STP_DIR_Pin             GPIO_PIN_1
#define AARB_STP_DIR_GPIO_Port       GPIOB
#define NC_MCU0_Pin                  GPIO_PIN_2
#define NC_MCU0_GPIO_Port            GPIOB
#define LTC_CS_Pin                   GPIO_PIN_10
#define LTC_CS_GPIO_Port             GPIOB
#define TIME_SET_Pin                 GPIO_PIN_12
#define TIME_SET_GPIO_Port           GPIOB
#define LTC_CLK_Pin                  GPIO_PIN_13
#define LTC_CLK_GPIO_Port            GPIOB
#define LCT_MISO_Pin                 GPIO_PIN_14
#define LCT_MISO_GPIO_Port           GPIOB
#define LTC_MOSI_Pin                 GPIO_PIN_15
#define LTC_MOSI_GPIO_Port           GPIOB
#define BUZZER_Pin                   GPIO_PIN_6
#define BUZZER_GPIO_Port             GPIOC
#define MUX_A0_Pin                   GPIO_PIN_7
#define MUX_A0_GPIO_Port             GPIOC
#define MUX_A1_Pin                   GPIO_PIN_8
#define MUX_A1_GPIO_Port             GPIOC
#define MUX_A2_Pin                   GPIO_PIN_11
#define MUX_A2_GPIO_Port             GPIOA
#define MUX_A3_Pin                   GPIO_PIN_12
#define MUX_A3_GPIO_Port             GPIOA
#define MCP_INT_Pin                  GPIO_PIN_2
#define MCP_INT_GPIO_Port            GPIOD
#define MCP_INT_EXTI_IRQn            EXTI2_IRQn
#define PB4_NC_Pin                   GPIO_PIN_4
#define PB4_NC_GPIO_Port             GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
