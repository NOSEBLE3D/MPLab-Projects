#include<p18f452.h>
#define t PORTBbits.RB0
void delay(int k);
void main(void)
{
TRISBbits.TRISB0=0;
while(1)
{
t=1;
delay(500);
t=0;
}
}
void delay(int k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}