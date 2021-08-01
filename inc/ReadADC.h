/**
 * @file ReadADC.h
 * @author 302606 (you@domain.com)
 * @brief ADC function definition
 * @version 0.1
 * @date 2021-08-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __READADC_H__
#define __READADC_H__
/**
 * @brief Reading the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif
