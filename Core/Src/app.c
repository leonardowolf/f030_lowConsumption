/*
 * app.c
 *
 *  Created on: May 5, 2025
 *      Author: Leonardo Leite
 */

#include "app.h"

uint8_t app_start(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_Delay(1000);
    return 0;
}

