#include<LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:
  LCD.
  begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD.setCursor(5,0);
  LCD.print("QISCET");
  LCD.setCursor(1,1);
  LCD.print("ECE DEPARTMENT");
}
