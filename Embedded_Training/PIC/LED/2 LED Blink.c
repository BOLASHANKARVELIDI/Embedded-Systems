#include <2 LED Blink.h>
#bit LED1=0X06.1
#bit TLED1=0X86.1
#bit LED2=0X07.1
#bit TLED2=0X87.1
void main()
{
TLED1=0;
LED1=0;
TLED2=0;
LED2=0;

   while(TRUE)
   {
      LED1=1;
      LED2=1;
      delay_ms(1000);
      LED1=0;
      LED2=0;
      delay_ms(1000);
      
   }

}
