#include<P18F452.h>
#define sw PORTCbits.RC0
#pragma config WDT= OFF
void delay (unsigned int k);
void main()
{
 TRISCbits.TRISC0=0x01;
TRISD=0X00;
while(1)
{
 if(sw==1)
 {
  PORTD=0X08;
  delay(100);
  PORTD=0X04;
  delay(100);
  PORTD=0X02;
  delay(100);
  PORTD=0X01;
  delay(100);
 }
 else
 {
  PORTD=0X01;
  delay(100);
  PORTD=0X02;
  delay(100);
  PORTD=0X04;
  delay(100);
  PORTD=0X08;
  delay(100);
 }
}
}
void delay(unsigned int k)
{
 unsigned int i, j ;
 for(i=0;i<=k;i++)
 for(j=0;j<=165;j++);
}