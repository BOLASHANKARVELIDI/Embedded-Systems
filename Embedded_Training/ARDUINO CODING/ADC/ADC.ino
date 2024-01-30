#include<LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:
  LCD.
  begin(16,2);
  pinMode(A0,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=analogRead(A0);
  LCD.setCursor(1,0);
  LCD.print(a);
}
