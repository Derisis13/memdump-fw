/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* state enum type */
typedef enum {
  run, read_spi, read_i2c, read_d28, read_d32, write_spi, write_i2c, write_d28, write_d32, invalid
} state;

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

void i2c_dump(uint16_t dev_address, uint16_t capacity);
void spi_dump(uint16_t capacity);
void d28_dump(uint16_t capacity);
void d32_dump(uint16_t capacity);

void i2c_write(uint16_t dev_address, uint16_t capacity);
void spi_write(uint16_t capacity);
void d28_write(uint16_t capacity);
void d32_write(uint16_t capacity);

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ARST_Pin GPIO_PIN_13
#define ARST_GPIO_Port GPIOC
#define ADATA_Pin GPIO_PIN_14
#define ADATA_GPIO_Port GPIOC
#define ACLK_Pin GPIO_PIN_15
#define ACLK_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_3
#define LED_GPIO_Port GPIOA
#define D0_Pin GPIO_PIN_0
#define D0_GPIO_Port GPIOB
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_2
#define D2_GPIO_Port GPIOB
#define D3_Pin GPIO_PIN_10
#define D3_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_11
#define D4_GPIO_Port GPIOB
#define D5_Pin GPIO_PIN_12
#define D5_GPIO_Port GPIOB
#define D6_Pin GPIO_PIN_13
#define D6_GPIO_Port GPIOB
#define D7_Pin GPIO_PIN_14
#define D7_GPIO_Port GPIOB
#define SZE_Pin GPIO_PIN_4
#define SZE_GPIO_Port GPIOB
#define WP_Pin GPIO_PIN_5
#define WP_GPIO_Port GPIOB
#define NCE_Pin GPIO_PIN_8
#define NCE_GPIO_Port GPIOB
#define NWE_Pin GPIO_PIN_9
#define NWE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
