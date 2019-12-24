/*
******************************************************************************
* File Name          : config.h
* Description        : Basic configuration for this board(c.f. GPIO Macro, Enable flag for different processes
******************************************************************************
*/
#ifndef __CONFIG_H
#define __CONFIG_H

#include "stm32f4xx_hal.h"

// General Macros
#define LED0_H HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET)
#define LED0_L HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET)

#endif  //__CONFIG_H
