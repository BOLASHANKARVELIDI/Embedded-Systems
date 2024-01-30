void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop() {
  digitalWrite(1,1);
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,1);
  delay(500);
  digitalWrite(1,0);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  delay(500);
}
