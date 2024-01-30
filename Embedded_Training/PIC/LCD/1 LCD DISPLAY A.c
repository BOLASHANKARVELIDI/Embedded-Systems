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
        display('A',1);
      }
   
}
