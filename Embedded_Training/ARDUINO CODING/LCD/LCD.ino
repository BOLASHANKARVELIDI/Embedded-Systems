 #include<LiquidCrystal.h>
LiquidCrystal LCD(8,9,10,11,12,13);
void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD.setCursor(1,0);
  LCD.print("JAYANTH");
}
