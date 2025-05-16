/*
 * app.c
 *
 *  Created on: May 5, 2025
 *      Author: Leonardo Leite
 */

#include "app.h"
uint16_t hsCntr[] = {0,0,0,0,0};
uint8_t TX_Buffer [] = "Hi!" ;

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
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9,GPIO_PIN_RESET);
		HAL_SPI_Transmit( &hspi1 , TX_Buffer , 3 , 100 );
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9,GPIO_PIN_SET);
//		HAL_Delay ( 1000 );
		iter = 0;
	}
}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_0) {
	  hsCntr[0]++;
  }else if(GPIO_Pin == GPIO_PIN_1) {
	  hsCntr[1]++;
  }else if(GPIO_Pin == GPIO_PIN_2) {
	  hsCntr[2]++;
  }else if(GPIO_Pin == GPIO_PIN_3) {
	  hsCntr[3]++;
  }else if(GPIO_Pin == GPIO_PIN_4) {
	  hsCntr[4]++;
  } else {
      __NOP();
  }
}

uint8_t app_start(){
	HAL_SPI_Transmit( &hspi1 , TX_Buffer , 3 , 1000 );
	HAL_Delay ( 100 );
	return 0;
}

