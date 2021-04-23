/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB|=(1<<PB0);//set output bit
    DDRB&=~(1<<PB6);//clear bit
    PORTB|=(1<<PB6);//set bit
    DDRB&=~(1<<PB7);
    PORTB|=(1<<PB7);

    while(1)
    {   if((!(PINB&(1<<PB6)))&&(!(PINB&(1<<PB7))))
        {PORTB|=(1<<PB0);//LED on
        _delay_ms(20);}
        else
        {PORTB&=~(1<<PB0);//LED off
        _delay_ms(20);
        }


    }
    return 0;
}
