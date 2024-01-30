#include <1 LCD DISPLAY A.h>
#byte LCD=0X08
#byte TLCD=0X88
#bit RS=0X07.0
#bit TRS=0X87.0
#bit EN=0X07.1
#bit TEN=0X87.1
void display(unsigned int A,unsigned int B)
{
LCD=A;
RS=B;
EN=1;
delay_ms(200);
EN=0;
}
void main()
{
LCD=0;
TLCD=0;
RS=0;
TRS=0;
EN=0;
TEN=0;
display(0X0C,0);
display(0X38,0);
   while(TRUE)
   {
     display(0X80,0);
     display('V',1);
     display(0X81,0);
     display('E',1);
     display(0X82,0);
     display('L',1);
     display(0X83,0);
     display('I',1);
     display(0X84,0);
     display('D',1);
     display(0X85,0);
     display('I',1);
     display(0XC0,0);
     display('B',1);
     display(0XC1,0);
     display('0',1);
     display(0XC2,0);
     display('L',1);
     display(0XC3,0);
     display('A',1);
     display(0XC4,0);
     display('_',1);
     display(0XC5,0);
     display('S',1);
     display(0XC6,0);
     display('H',1);
     display(0XC7,0);
     display('A',1);
     display(0XC8,0);
     display('N',1);
     display(0XC9,0);
     display('K',1);
     display(0XCA,0);
     display('A',1);
     display(0XCB,0);
     display('R',1);
     
   }

}
