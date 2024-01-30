void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1,1);
  delay(1000);
  digitalWrite(1,0);
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  
}
