#include <xc.h>
#include<xc.h>
void counter(int);
int main(void)  {
    TRISB=0xFFFF;
    TRISC=0x0000;
    PORTC=0x0000;
    PORTB=0x0000;

    while(1) {
        if(PORTBbits.RB1==1) {
            int time=-9;
            while(time<10)  {
                if(time<0)
                    counter(time+9);
                else
                    counter(9-time);
                time++;
            }
        }
    }
    return 0;
}

void counter(int instant)  {
    switch(instant) {
         case 0:
           PORTC=0b00111111;
           break;
           case 1:
           PORTC=0b00000110;
           break;
           case 2:
           PORTC=0b01001111;
           break;
           case 3:
           PORTC=0b00000110;
           break;
           case 4:
           PORTC=0b01101101;
           break;
           case 5:
           PORTC=0b01101101;
           break;
           case 6:
           PORTC=0b01111101;
           break;
           case 7:
           PORTC=0b00000111;
           break;
           case 8:
           PORTC=0b01111111;
           break;
           case 9:
           PORTC=0b01101111;
    }
}
