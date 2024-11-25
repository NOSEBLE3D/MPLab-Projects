#include<p18f452.h>
#define rs PORTCbits.RC0
#define rw PORTCbits.RC1
#define en PORTCbits.RC2
void lcd_data(unsigned int);
void lcd_cmd(unsigned int);
void lcd_init(void);
void delay(int k);
void main()
{
	TRISC=0x00;
	TRISD=0x00;
	PORTC=0x00;
	PORTD=0x00;
	lcd_init();
	delay(200);
	while(1)
	{
		lcd_cmd(0x86);
		lcd_data('e');
		lcd_data('c');
		lcd_data('e');
		lcd_cmd(0xC0);
		lcd_data('j');
		lcd_data('a');
		lcd_data('i');
		lcd_data('n');
		lcd_data(' ');
		lcd_data('u');
		lcd_data('n');
		lcd_data('i');
		lcd_data('v');
		lcd_data('e');
		lcd_data('r');
		lcd_data('s');
		lcd_data('i');
		lcd_data('t');
		lcd_data('y');
		}
}
void 
lcd_init(void);
{
	en=0;
	rw=0;
	rs=0;
	lcd_cmd(0x38);
	lcd_cmd(0x0E);
	lcd_cmd(0x0c);
	lcd_cmd(0x01);
	lcd_cmd(0x06);
}
void lcd_data(unsigned int character)
{
	PORTD=character;
	rs=1;
	en=1;
	en=0;
	delay(10);
}
void lcd_cmd(unsigmed int cmd)
{
	PORTD=cmd;
	rs=0;
	en=1;
	en=0;
	delay(10);
}