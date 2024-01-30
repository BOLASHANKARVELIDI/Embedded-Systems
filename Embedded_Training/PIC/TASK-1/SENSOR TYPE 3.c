#include <SENSOR TYPE 3.h>

#byte LCD=0x08
#byte TLCD=0x88

#bit RS=0x07.6
#bit TRS=0x87.6

#bit EN=0x07.7
#bit TEN=0x87.7

#bit SW1=0x07.0
#bit TSW1=0x87.0
#bit SW2=0x07.1
#bit TSW2=0x87.1

#bit LED1=0x06.0
#bit TLED1=0x86.0
#bit LED2=0x06.1
#bit TLED2=0x86.1

#bit LED3=0x06.2
#bit TLED3=0x86.2
#bit LED4=0x06.3
#bit TLED4=0x86.3

char str[10]="COUNT : ";
int count=0;
VOID display(unsigned int A,unsigned int B)
{
LCD=A;
RS=B;
EN=1;
delay_ms(200);
EN=0;
}
void display_string(char *str)
{
for(int j=0;str[j]!=0;j++)
{
display(str[j],1);
delay_ms(200);
}
}
void main()
{
SW1=0;
TSW1=1;
SW2=0;
TSW2=1;
LCD=0;
TLCD=0;
RS=0;
TRS=0;
EN=0;
TEN=0;

LED1=0;
TLED1=0;
LED2=0;
TLED2=0;

LED3=0;
TLED3=0;
LED4=0;
TLED4=0;

display(0x0c,0);
display(0x38,0);
   while(TRUE)
   {
      display(0X80,0);
      display_string(str);
      if(SW1==1)
      {
      while(SW1==1);
      count+=1;
      }
      if(SW2==1)
      {
      while(SW2==1);
      count-=1;
      }
      display(0x89,0);
      display((count/10)+0x30,1);
      display(0x8A,0);
      display((count%10)+0x30,1);
      
      if(count>=1)
      {
      LED1=1;
      }
      else
      {
      LED1=0;
      }
      if(count>=5)
      {
      LED2=1;
      }
      else
      {
      LED2=0;
      }
      if(count>=8)
      {
      LED3=1;
      }
      else
      {
      LED3=0;
      }
      if(count>9)
      {
      LED4=1;
      }
      else
      {
      LED4=0;
      }
      
    }
}
