/**
 * @file OutPWM.h
 * @author 302606 (you@domain.com)
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-08-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __OUTPWM_H__
#define __OUTPWM_H__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t temp_value);
/**
 * @brief port configuration for PWM
 * 
 */
void InitPWM(void);
#endif
