/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB|=(1<<PB0);
    DDRB&=~(1<<PB6);
    PORTB|=(1<<PB6);
    DDRB&=~(1<<PB7);
    PORTB|=(1<<PB7);

    while(1)
    {   if((!(PINB&(1<<PB6)))&&(!(PINB&(1<<PB7))))
        {PORTB|=(1<<PB0);
        _delay_ms(20);}
        else
        {PORTB&=~(1<<PB0);
        _delay_ms(20);
        }


    }
    return 0;
}
