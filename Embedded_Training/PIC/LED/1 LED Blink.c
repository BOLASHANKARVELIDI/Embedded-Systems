#include <1 LED Blink.h>
#bit LED = 0X06.1
#bit TLED = 0X86.1

void main()
{
TLED = 0;
LED = 0;

   while(TRUE)
   {
   LED = 1;
   delay_ms(1000);
   LED=0;
   delay_ms(1000);
   }

}
