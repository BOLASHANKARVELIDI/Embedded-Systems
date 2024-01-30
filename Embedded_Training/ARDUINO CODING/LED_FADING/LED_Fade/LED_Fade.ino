int led = 9;
int brightness = 0;
int fadeAmount = 5;
void setup() {
  // declare pin 9 to be an output:
  pinMode(9,OUTPUT);
  analogWrite(9,brightness);
  pinMode(led,OUTPUT);
}
void loop() {
  analogWrite(led,brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
