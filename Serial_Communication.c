#include<p18f452.h>
void SerTx(unsigned char);
void main(void)
{
TXSTA=0x20;
SPBRG=15;
TXSTAbits.TXEN=1;
RCSTAbits.SPEN=1;
while(1)
{
SerTx('J');
SerTx('A');
SerTx('I');
SerTx('N');
SerTx('/r');
}
}
void SerTx(unsigned char c)
{
while(PIR1bits.TXIF==0);
TXREG=c;
}