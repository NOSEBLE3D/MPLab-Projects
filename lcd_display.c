#include <p18f452.h>
#define rs PORTCbits.RC0
#define rw PORTCbits.RC1
#define en PORTCbits.RC2
void lcd_data(unsigned int);
void lcd_cmd(unsigned int);
void lcd_init(void);
void MSDelay( int itime);
void main(void)
{
TRISC=0x00;
TRISD=0x00;
PORTC=0x00;
PORTD=0x00;
lcd_init();
MSDelay(200);
while(1)
{

lcd_cmd(0X86);
lcd_data('E');
lcd_data('C');
lcd_data('E');
lcd_cmd(0XC0);
lcd_data('J');
lcd_data('A');
lcd_data('I');
lcd_data('N');
lcd_data(' ');
lcd_data('U');
lcd_data('N');
lcd_data('I');
lcd_data('V');
lcd_data('E');
lcd_data('R');
lcd_data('S');
lcd_data('I');
lcd_data('T');
lcd_data('Y');
}
}
void lcd_init(void)
{
en = 0;
rs = 0;
rw = 0;
lcd_cmd(0X38);
lcd_cmd(0X0E);
lcd_cmd(0X0C);
lcd_cmd(0X01);
lcd_cmd(0X06);
}
void lcd_data(unsigned int character)
{
PORTD=character ;
rs = 1;
en = 1;
en = 0;
MSDelay(10); 
}
void lcd_cmd(unsigned int cmd)
{
PORTD=cmd ;
rs = 0;
en = 1;
en = 0;
MSDelay(10);
}
void MSDelay( int itime)
 {
 unsigned int i, j;
 for(i=0;i<itime;i++)
 for(j=0;j<135;j++);
 }