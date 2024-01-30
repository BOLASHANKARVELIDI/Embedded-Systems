#include<LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9,8);
int b=0,y=0,COUNT=0;
void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
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
  int x=digitalRead(1);
  if(x==1)
  {
    while(y==0)
    {
      x=digitalRead(1);
      delay(100);
      if(x==0)
      {
        y=1;
        delay(600);
      }
    }
    COUNT=COUNT-1;
    y=0;
  }
  
  LCD.setCursor(0,0);
  LCD.print("Count = ");
  LCD.print(COUNT);
  delay(700);

  if(COUNT>=1)
  {
    digitalWrite(2,1);
  }
  else{
    
    digitalWrite(2,0);
  }
  
  if(COUNT>=5)
  {
    digitalWrite(3,1);
  }
  else{
    
    digitalWrite(3,0);
  }
  
  if(COUNT>=8)
  {
    digitalWrite(4,1);
  }
  else{
    
    digitalWrite(4,0);
  }
}
