#include <xc.h>
void delay_ms(unsigned int x)
{
    int i;
    for(i=0;i<x;i++);
}
void main()
{
	TRISB=0x0000;			//Sets Port-B as an output port

	while(1)
	{
		delay_ms(1000);
		PORTB=0x00FF;
		delay_ms(1000);
		PORTB=0xFF00;
		delay_ms(1000);

	}
}
