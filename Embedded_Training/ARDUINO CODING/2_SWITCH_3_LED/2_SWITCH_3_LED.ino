void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(0);
  int b=digitalRead(1);
  if(a==1 && b==0)
  {
    digitalWrite(2,1);
  }
  else
  {
    digitalWrite(2,0);
  }
  if(b==1 && a==0)
  {
    digitalWrite(3,1);
  }
  else
  {
    digitalWrite(3,0);
  }
  if(a==1 && b==1)
  {
    digitalWrite(4,1);
  }
  else
  {
    digitalWrite(4,0);
  }
}
