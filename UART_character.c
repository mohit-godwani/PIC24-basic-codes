#include<xc.h>

void InitU1();
char uart_putchar(char);
char uart_getchar();

void main() {
    InitU1();
    while(1) {
        char ch = uart_getchar();
        uart_putchar(ch);
    }
}

void InitU1() {
    U1BRG = 34;
    U1MODE = 0;
    U1STA = 0;

    U1MODEbits.UARTEN = 1;

    U1STAbits.UTXISEL0 = 0;
    U1STAbits.UTXISEL1 = 1;
    U1STAbits.UTXEN = 1;


};

char uart_putchar(char ch)
{
    while(U1STAbits.UTXBF);
    U1TXREG = ch;
    return ch;
};

char uart_getchar() {
    while(!U1STAbits.URXDA);
    char ch = U1RXREG;
    return ch;
};
