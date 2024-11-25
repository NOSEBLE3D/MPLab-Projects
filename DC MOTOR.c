#include<p18f452.h>
#define sw PORTCbits.RC0
#define T1 PORTDbits.RD0
#define T2 PORTDbits.RD1
#pragma config WDT= OFF
void delay(unsigned int k);
void main()
{
TRISCbits.TRISC0= 0XFF;
TRISDbits.TRISD0= 0x00;
TRISDbits.TRISD1= 0x00;
while(1)
{
if(sw==1)
{
T1=0xFF;
T2=0X00;
delay(100);
}
  else
{
T1=0X00;
T2=0XFF;
delay(100);
}
}
}
void delay(unsigned int k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}