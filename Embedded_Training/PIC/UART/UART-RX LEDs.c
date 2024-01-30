#include <UART-RX LEDs.h>

#bit LED1=0x06.2
#bit TLED1=0x86.2

#bit LED2=0x06.3
#bit TLED2=0x86.3

#bit LED3=0x06.4
#bit TLED3=0x86.4

#bit LED4=0x06.5
#bit TLED4=0x86.5

#bit LED5=0x06.6
#bit TLED5=0x86.6

#bit LED6=0x06.7
#bit TLED6=0x86.7

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

char data[11]="ECE_QISCET";
char v;

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


int receive()
{
while(RCIF==0);
RCIF=0;
v=RCREG;
display(0x80,0);
display(v,1);
delay_ms(200);
return v;

}


void main()
{
LED1=0;
TLED1=0;
LED2=0;
TLED2=0;
LED3=0;
TLED3=0;
LED4=0;
TLED4=0;
LED5=0;
TLED5=0;
LEd6=0;
TLED6=0;

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

TXSTA=0x26;
RCSTA=0x90;
SPBRG=129;


while(true)
{
receive();
if(v>=(0x30+1)){
LED1=1;
}
else{
LED1=0;
}
if(v>=(0x30+2)){
LED2=1;
}
else{
LED2=0;
}
if(v>=(0x30+3)){
LED3=1;
}
else{
LED3=0;
}
if(v>=(0x30+4)){
LED4=1;
}
else{
LED4=0;
}
if(v>=(0x30+5)){
LED5=1;
}
else{
LED5=0;
}
if(v>=(0x30+6)){
LED6=1;
}
else{
LED6=0;
}

display(0xC0,0);
for(int j=0;data[j]!=0;j++)
{
transmit(data[j]);
display(data[j],1);
}
transmit('\r');
delay_ms(200);


}
}

