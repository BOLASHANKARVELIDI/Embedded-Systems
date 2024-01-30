#include <UART2.h>
#byte LCD=0X08
#byte TLCD=0X88

#bit RS=0X06.0
#bit TRS=0X86.0

#bit EN=0X06.1
#bit TEN=0X86.1

#bit tx=0x07.6
#bit Ttx=0x87.6

#bit rx=0x07.7
#bit Trx=0x87.7



#byte SPBRG=0x99
#byte TXREG=0x19
#byte RCREG=0x1A

#bit TXIF=0x0C.4
#bit RCIF=0x0C.5

#byte TXSTA=0x98
#byte RCSTA=0x18

//char v;
char data[11]="ECE_QISCET";

void display(unsigned int A,unsigned int B)
{
LCD=A;
RS=B;
EN=1;
delay_ms(200);
EN=0;
delay_ms(200);
}


void transmit(char a)
{
TXREG=a;
while(TXIF==0);
TXIF=0;
}


void receive()
{

while(RCIF==0);
RCIF=0;
char v=RCREG;
display(0x80,0);
display(v,1);
delay_ms(200);
}


void main()
{
LCD=0;
TLCD=0;

RS=0;
TRS=0;

EN=0;
TEN=0;

Ttx=0;
Trx=1;

display(0x0c,0);
display(0x38,0);
display(0x80,0);

TXSTA=0x24;
RCSTA=0x90;
SPBRG=129;


while(true)
{
receive();
display(0xC0,0);
for(int i=0;data[i]!=0;i++)
{
transmit(data[i]);
display(data[i],1);
}
transmit('\r');
delay_ms(200);
}
}

