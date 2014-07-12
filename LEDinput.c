#include <xc.h>

void delay_ms(unsigned int x)
{
    while(x>0)
        x--;
}

void main()
{
    TRISB=0xFFFF;
    TRISC=0x0000;
    PORTB=0x0000;
    PORTC=0x0000;
    while(1)
    {
        if(PORTBbits.RB15==1)
        {
            PORTC=0xFFFF;
            delay_ms(1000);
        }
        else
        {
            PORTC=0x0000;
            delay_ms(1000);
        }
    }
}

