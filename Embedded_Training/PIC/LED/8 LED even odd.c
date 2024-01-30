#include <8 LED even odd.h>
#bit LED1=0X06.0
#bit TLED1=0x86.0
#bit LED2=0X06.1
#bit TLED2=0X86.1
void main()
{
LED1=0;
TLED1=0;
LED2=0;
TLED2=0;
   while(TRUE)
   {
      LED1=1;
      delay_ms(1000);
      LED1=0;
      delay_ms(1000);
      LED2=1;
      delay_ms(1000);
      LED2=0;
      delay_ms(1000);
   }

}
