#include<stdio.h>
#include<conio.h>
#include"p18f4520"
#include"config.h"
void delay(void);

void main()
   {
TRISB=0X00;
ADCON1=0X0F;
PORTB=0X22;
delay();
PORTB=0X51;
delay();
PORTB=0X49;
delay();
PORTB=0X45;
delay();
PORTB=0X22;
delay();
PORTB=0X00;
delay();
delay();
delay();





PORTB=0X3E;
delay();
PORTB=0X41;
delay();
PORTB=0X41;
delay();
PORTB=0X41;
delay();
PORTB=0X3E;
delay();
PORTB=0x00;
delay();
delay();
delay();




PORTB=0X7F;
delay();
PORTB=0X41;
delay();
PORTB=0X41;
delay();
PORTB=0X22;
delay();
PORTB=0X1C;
delay();
PORTB=0X00;
delay();
delay();
delay();




PORTB=0X3F;
delay();
PORTB=0X48;
delay();
PORTB=0X48;
delay();
PORTB=0X480;
delay();
PORTB=0X3F;
delay();
PORTB=0X00;
delay();
delay();
delay();




PORTB=0X00;
for(int i=0;i<33;i++) 
delay();
}      






void delay()
{
    INTCONbits.TMR0IE=1;
    INTCONbits.TMR0IF=0;
    T0CON=0x08;
    TMR0L=0XB9;
    TMR0H=0XEB;
    T0CONbits.TMR0ON=1;
    while(INTCONbits.TMR0IF==0)
    {}
}