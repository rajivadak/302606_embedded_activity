/**
 * @file main.c
 * @author 260213 (you@domain.com)
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "ledstat.h"
#include "ReadADC.h"
#include<avr/io.h>


/**
 * @brief Initialize all the peripherals
 * 
 */

void peripheral_init(void)
{
    /*Configure LED and Switch pins*/
    DDRB|=(1<<PB1);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
    InitADC();
}


int main(void)
{
    uint16_t temp;
    // Initialize peripherals
    peripheral_init();
    while(1)
    {
        if(SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                ledstat(LED_ON);//LED is ON
                temp=ReadADC(0);
            }
        }
        else
        {
            ledstat(LED_OFF);//LED is OFF
        }
    }
    return 0;
}

