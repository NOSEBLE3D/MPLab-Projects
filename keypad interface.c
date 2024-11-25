#include<p18f452.h>
#pragma config WDT=OFF
void delay(unsigned char k);
#define rs PORTDbits.RD0
#define rw PORTDbits.RD1
#define en PORTDbits.RD2
#define myport PORTB
#define row1 PORTCbits.RC0
#define row2 PORTCbits.RC1
#define row3 PORTCbits.RC2
#define row4 PORTCbits.RC3
#define col1 PORTCbits.RC4
#define col2 PORTCbits.RC5
#define col3 PORTCbits.RC6

void lcdcmd(unsigned char a)
{
myport = a;
rs=0;
rw=0;
en=1;
Delay10KTCYx(1);
en=0;
}
void lcddata(unsigned char a)
{
myport = a;
rs=1;
rw=0;
en=1;
delay(250);
en=0;
}
void lcdinit(void)
{
//lcdcmd(0x01); // remove clear
lcdcmd(0x02);
lcdcmd(0x38);
lcdcmd(0x0e);
lcdcmd(0x06);
lcdcmd(0x80);
}
void keypad(void)
{
delay(250);
row1=1;
if(col1==1)
{
while(col1==1);
lcddata('1');
}
if(col2==1)
{
while(col2==1);
lcddata('2');
}
if(col3==1)
{
while(col3==1);
lcddata('3');
}
row1=0;
row2=1;
if(col1==1)
{
while(col1==1)
lcddata('4');
}
if(col2==1)
{
while(col2==1);
lcddata('5');
}
if(col3==1)
{
while(col3==1);
lcddata('6');
}
delay(250);
row2=0;
row3=1;
if(col1==1)
{
while(col1==1);
lcddata('7');
}
if(col2==1)
{
while(col2==1);
lcddata('8');
}
if(col3==1)
{
while(col3==1);
lcddata('9');
}
delay(250);
row3=0;
row4=1;
if(col1==1)
{
while(col1==1);
lcddata('*');
}
if(col2==1)
{
while(col2==1);
lcddata('0');
}
if(col3==1)
{
while(col3==1);
lcddata('#');
}
delay(250);
row4=0;
}
void main()
{
TRISD = 0x00;
TRISB=0x00;
TRISC =0xF0;
PORTD=0x00;
PORTB=0x00;
PORTC=0x00;
lcdinit();
while(1)
{
keypad(); //always in while(1)
}
}void delay(unsigned char k)
{
unsigned int i,j;
for(i=0;i<=k;i++)
for(j=0;j<=165;j++);
}