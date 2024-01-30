#include<LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9,8);
int COUNT=0,x=0,y=0;
void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
  pinMode(0,INPUT);
  pinMode(1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(0);
  if(a==1)
  {
    while(x==0)
    {
     a=digitalRead(0);
     delay(100);
     if(a==0)
     {
      x=1;
      delay(600);
     }
    }
    COUNT=COUNT+1;
    x=0;
  }
  int b=digitalRead(1);
  if(b==1)
  {
    while(y==0)
    {
     b=digitalRead(1);
     delay(100);
     if(b==0)
     {
      y=1;
      delay(600);
     }
    }
    COUNT=COUNT-1;
    y=0;
  }
  LCD.setCursor(0,0);
  LCD.print("Count : ");
  LCD.print(COUNT);
  delay(700);
}
