#include<p18f452.h>
void delay(int k);
void main()
{
TRISD=0x00;
while(1)
{
PORTD=0x55;
delay(250);
PORTD=0xAA;
delay(250);
}
}
void delay(int k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}