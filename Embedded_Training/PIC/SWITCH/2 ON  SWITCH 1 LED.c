#include <2 ON  SWITCH 1 LED.h>
#bit sw1=0x06.0
#bit tsw1=0x86.0
#bit sw2=0x06.1
#bit tsw2=0x86.1
#bit LED=0x07.0
#bit TLED=0x87.0
void main()
{
sw1=0;
tsw1=1;
sw2=0;
tsw2=1;
LED=0;
TLED=0;
   while(TRUE)
   {
      if(sw1==1 && sw2==1)
      {
      LED=1;
      }
      else
      {
      LED=0;
      }
   }
}
