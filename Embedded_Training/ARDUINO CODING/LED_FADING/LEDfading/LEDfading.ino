//#include<LiquidCrystal.h>
//LiquidCrystal LCD(13,12,11,10,9,8);
int led=13;
int brightness=0;
int fadeAmount=5;
void setup() {
  // put your setup code here, to run once:
  //LCD.begin(16,2);
  //pinMode(A0,INPUT);
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=analogRead(A0);
  //LCD.setCursor(1,0);
  //LCD.print(a);
  brightness=a;

  analogWrite(led,brightness);
  if(brightness >= 0 && brightness < 512){
    fadeAmount += fadeAmount;
  }
  if(brightness >= 512 && brightness <1024){
    fadeAmount -= fadeAmount;
  }
  
}
