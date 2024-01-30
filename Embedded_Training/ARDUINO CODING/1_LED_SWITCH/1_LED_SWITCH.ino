
int Sw=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(Sw,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(Sw);
  if(a==1)
  {
    digitalWrite(2,HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(2,LOW);
    delay(100);
  }
}
