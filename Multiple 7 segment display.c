#include<p18f452.h>
void delay(int k);
#pragma config WDT=OFF
void main()
{
unsigned char a,b;
unsigned char s1[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
unsigned char s2[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
TRISB=0x00;
TRISD=0x00;
while(1)
{
for(a=0;a<=9;a++)
{
PORTB=s2[a];
for(b=0;b<=9;b++)
{
PORTD=s1[b];
delay(100);
}
}
}
}
void delay(int k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}