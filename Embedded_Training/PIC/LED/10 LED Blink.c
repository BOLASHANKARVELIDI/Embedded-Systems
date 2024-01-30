#include <10 LED Blink.h>
#bit LED1=0X06.1
#bit TLED1=0X86.1
#bit LED2=0X06.2
#bit TLED2=0X86.2
#bit LED3=0X06.3
#bit TLED3=0X86.3
#bit LED4=0X06.4
#bit TLED4=0X86.4
#bit LED5=0X06.5
#bit TLED5=0X86.5
#bit LED6=0X06.6
#bit TLED6=0X86.6
#bit LED7=0X07.0
#bit TLED7=0X87.0
#bit LED8=0X07.1
#bit TLED8=0X87.1
#bit LED8=0X07.1
#bit TLED8=0X87.1
#bit LED9=0X07.2
#bit TLED9=0X87.2
#bit LED10=0X07.3
#bit TLED10=0X87.3
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
LED9=0;
TLED9=0;
LED10=0;
TLED10=0;

   while(TRUE)
   {
      LED1=1;
      LED2=1;
      LED3=0;
      LED4=0;
      LED5=1;
      LED6=1;
      LED7=0;
      LED8=0;
      LED9=1;
      LED10=1;
      delay_ms(1000);
      LED1=0;
      LED2=0;
      LED3=1;
      LED4=1;
      LED5=0;
      LED6=0;
      LED7=1;
      LED8=1;
      LED9=0;
      LED10=0;
      delay_ms(1000);
   }

}
