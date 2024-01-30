void setup() {
  // put your setup code here, to run once:
  pinMode(1,INPUT);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(1);
  if(a==1)
  {
    digitalWrite(3,1);
  }
  else
  {
    digitalWrite(3,0);
  }
  int b=digitalRead(2);
  if(b==1)
  {
    digitalWrite(4,1);
  }
  else
  {
    digitalWrite(4,0);
  }
}
