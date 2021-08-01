/**
 * @file UART.h
 * @author 302606(you@domain.com)
 * @brief UART serial communication
 * @version 0.1
 * @date 2021-08-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __UART_H__
#define __UART_H__
#include<avr/io.h>
/**
 * @brief Inittialize UART serial communication ports
 * 
 * @param ubrr 
 */
void InitUART(uint16_t ubrr);
/**
 * @brief Read characters from UART port
 * @return char
 */
char UARTread();
/**
 * @brief Write characters to UART port
 * 
 * @param data 
 */
void UARTwrite(char data);

#endif
