/**
 * @file OutPWM.c
 * @author 302606 (you@domain.com)
 * @brief Configure the PWM wave according to temperature
 * @version 0.1
 * @date 2021-08-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"OutPWM.h"
#include<util/delay.h>
#include<avr/io.h>
/**
 * @brief initializing timer and counter register
 * 
 */
void InitPWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}
/**
 * @brief Output with respect to analog input
 * 
 * @param ADC_val 
 */
char OutPWM (uint16_t ADC_val)
{
    
    char temperature;

    if((ADC_val>=0) && (ADC_val<=209)){

        OCR1A = 205; 
        temperature = 20;
        _delay_ms(20);
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; 
        temperature = 25;
       _delay_ms(20);
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 717;
        temperature = 29;
        _delay_ms(20);
    }
    else if((ADC_val>=710) && (ADC_val<=1024)){

        OCR1A = 973; 
        temperature = 33;
        _delay_ms(20);
    }
    else{
        OCR1A = 0; 
        temperature = 0;
    }
    return temperature;
}
