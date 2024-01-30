#include <ADC1023.h>

#byte LCD=0x08
#byte TLCD=0x88

#bit RS=0x07.6
#bit TRS=0x87.6

#bit EN=0x07.7
#bit TEN=0x87.7

#byte ADCON0=0x1F
#byte ADRESH=0x1E

#byte ADCON1=0x9F
#byte ADRESL=0x9E

#bit GO_DOWN=0X1F.2
void display(char,int);
void main()
{
ADCON0=0x01;

LCD=0x00;
RS=0;
EN=0;
TEN=0;
TLCD=0;
TRS=0;
ADCON1=0x80;

long int RESULT,adres,VALUE=0;
int a,b,c,d,e,f;

   while(TRUE)
   {
   GO_DOWN=1;
   display(0x38,0);
   display(0x0e,0);
   display(0xc0,0);
   adres=ADRESH;
   delay_ms(200);
   RESULT=ADRESL|adres<<8;
   delay_ms(200);
   while(TRUE)
   {
   VALUE=RESULT+VALUE;
   a=VALUE/1000;
   b=VALUE%1000;
   c=b/100;
   d=b%100;
   e=d/10;
   f=d%10;
   display(a+0x30,1);
   delay_ms(200);  
   display(c+0x30,1);
   delay_ms(200);
   display(e+0x30,1);
   delay_ms(200);
   display(f+0x30,1);
   delay_ms(200);
   }
   
}

void display(char x,int y)
{
LCD=x;
RS=y;
EN=1;
delay_ms(3);
EN=0;
delay_ms(3);
}
