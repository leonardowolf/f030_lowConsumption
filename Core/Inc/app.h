/*
 * app.h
 *
 *  Created on: May 5, 2025
 *      Author: Leonardo Leite
 */

#ifndef INC_APP_H_
#define INC_APP_H_

#include "main.h"
#include <stdint.h>

extern SPI_HandleTypeDef hspi1;

//extern TIM_HandleTypeDef htim14;

void Systick_Custom_Callback(void);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
uint8_t app_start();

#endif /* INC_APP_H_ */
