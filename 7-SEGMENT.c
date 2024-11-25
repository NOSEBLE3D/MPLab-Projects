#include<P18F452.h>
unsigned char a[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
void MSdelay(unsigned int k);
void main()
{
  unsigned int i;
TRISD=0;
while(1)
{
for(i=0;i<=9;i++)
{
PORTD=a[i];
MSdelay(1000);
}
}
}
void MSdelay(unsigned int k)
{
unsigned int i, j;
for(i=0;i<=k;i++)
for(j=0;j<100;j++);
}