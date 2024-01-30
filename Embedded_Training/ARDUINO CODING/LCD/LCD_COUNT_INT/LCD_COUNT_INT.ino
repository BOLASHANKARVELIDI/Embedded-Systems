#include<LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9,8);
 int COUNT=0,b=0;
void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
  pinMode(0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  int a=digitalRead(0);
  if(a==1)
  {
    while(b==0)
    {
     a=digitalRead(0);
     delay(100);
     if(a==0)
     {
      b=1;
      delay(600);
     }
    }
    COUNT=COUNT+1;
    b=0;
  }

  LCD.setCursor(0,0);
  LCD.print("Count = ");
  LCD.print(COUNT);
  delay(700);
}
