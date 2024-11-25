#include<p18f452.h>
#define mybit PORTBbits.RB0
void delay(int k);
void main()
{
TRISBbits.TRISB0=0x00;
while(1);
{
mybit=1;
delay(100);
mybit=0;
}
}
void delay(int k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}