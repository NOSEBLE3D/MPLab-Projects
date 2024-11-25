#include<p18f452.h>
void delay(int k);
void main()
{
unsigned char mybit;
TRISD=0xFF;
TRISB=0;
while(1)
{
mybit=PORTD;
delay(500);
PORTB=mybit;
}
}
void delay(int k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}