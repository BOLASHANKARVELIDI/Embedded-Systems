#include <2 SWITCH 8 LED INC DEC 3.h>
#bit LED1=0x06.0
#bit TLED1=0x86.0
#bit LED2=0x06.1
#bit TLED2=0x86.1
#bit LED3=0x06.2
#bit TLED3=0x86.2
#bit LED4=0x06.3
#bit TLED4=0x86.3
#bit LED5=0x06.4
#bit TLED5=0x86.4
#bit LED6=0x06.5
#bit TLED6=0x86.5
#bit LED7=0x06.6
#bit TLED7=0x86.6
#bit LED8=0x06.7
#bit TLED8=0x86.7
#bit SW1=0x07.6
#bit TSW1=0x87.6
#bit SW2=0x07.7
#bit TSW2=0x87.7

int count=0;
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
LED6=0;
TLED6=0;
LED7=0;
TLED7=0;
LED8=0;
TLED8=0;
SW1=0;
TSW1=1;
SW2=0;
TSW2=1;


   while(TRUE)
   {
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
         if(count>=1 && count<=8)
         {
         LED1=1;
         delay_ms(200);
         }
         else
         {
         LED1=0;
         delay_ms(200);
         }
         if(count>=2 && count<=8)
         {
         LED2=1;
         delay_ms(200);
         }
         else
         {
         LED2=0;
         delay_ms(200);
         }
         if(count>=3 && count<=8)
         {
         LED3=1;
         delay_ms(200);
         }
         else
         {
         LED3=0;
         delay_ms(200);
         }
         if(count>=4 && count<=8)
         {
         LED4=1;
         delay_ms(200);
         }
         else
         {
         LED4=0;
         delay_ms(200);
         }
         if(count>=5 && count<=8)
         {
         LED5=1;
         delay_ms(200);
         }
         else
         {
         LED5=0;
         delay_ms(200);
         }
         if(count>=6 && count<=8)
         {
         LED6=1;
         delay_ms(200);
         }
         else
         {
         LED6=0;
         delay_ms(200);
         }
         if(count>=7 && count<=8)
         {
         LED7=1;
         delay_ms(200);
         }
         else
         {
         LED7=0;
         delay_ms(200);
         }
         if(count==8)
         {
         LED8=1;
         delay_ms(200);
         }
         else
         {
         LED8=0;
         delay_ms(200);
         }
   }

}
