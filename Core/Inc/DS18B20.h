/*
 * DS18B20.h
 *
 *  Created on: Nov 28, 2024
 *      Author: agnes
 */

#include "main.h"

#ifndef INC_DS18B20_H_
#define INC_DS18B20_H_

#define DS18B20_PIN GPIO_PIN_5
#define DS18B20_PORT GPIOA


void Set_Pin_Output(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void Set_Pin_Input(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void delay_us(uint16_t us);
uint8_t DS18B20_Start(void);
void DS18B20_Write(uint8_t data);
uint8_t DS18B20_Read(void);
float DS18B20_GetTemp(void);


#endif /* INC_DS18B20_H_ */
