char a='0';
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >0){
   a=Serial.read();
    Serial.println(a);
    if(a=='1')
    {
      digitalWrite(13,HIGH);
    }
    else if(a=='0')
    {
      digitalWrite(13,LOW);
    }
  }
}
