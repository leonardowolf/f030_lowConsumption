/*
 * app.c
 *
 *  Created on: May 5, 2025
 *      Author: Leonardo Leite
 */

#include "app.h"

///**
// * @brief myprintf: prints strings on the defined uart
// * @param huart: poiter to the initialized uart in wich the string will be sent
// * @param fmt: string to be sent, can carry placeholders just like the printf couterpart
// * @param ...: vector of variables to bi inserted on the fmt string
// * @note   NONE
// * @retval NONE
// */
//void myprintf(UART_HandleTypeDef *huart,const char *fmt, ...) {
//  static char buffer[256];
//  va_list args;
//  va_start(args, fmt);
//  vsnprintf(buffer, sizeof(buffer), fmt, args);
//  va_end(args);
//
//  int len = strlen(buffer);
//  HAL_UART_Transmit(huart, (uint8_t*)buffer, len, 1000);
//
//}
//void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
//	if (htim == &htim14) {
//		//HAL_TIM_Base_Stop_IT(&htim14);//tim14 chill
//		__NOP();
//		//HAL_TIM_Base_Start_IT(&htim14);
//	}
//}

void Systick_Custom_Callback(void){
	static uint16_t iter = 0;
	if(++iter > 60000){
		__NOP();//this counts each 1 minute to do something... its doing nothing now :D
	}
}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_0) {
  }else if(GPIO_Pin == GPIO_PIN_1) {
  }else if(GPIO_Pin == GPIO_PIN_2) {
  }else if(GPIO_Pin == GPIO_PIN_3) {
  }else if(GPIO_Pin == GPIO_PIN_4) {
  } else {
      __NOP();
  }
}

uint8_t app_start(){
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
//	HAL_Delay(1000);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
//	HAL_Delay(1000);
    return 0;
}

