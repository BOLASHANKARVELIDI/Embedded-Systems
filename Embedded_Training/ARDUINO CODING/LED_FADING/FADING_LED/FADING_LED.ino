const int LED_PIN = 9; // the PWM pin the LED is attached to
unsigned long FADE_PEDIOD = 3000; // fade time is 3 seconds

unsigned long fadeStartTime;

// the setup routine runs once when you press reset
void setup() {
  pinMode(LED_PIN, OUTPUT); // declare pin 9 to be an output
  fadeStartTime = millis();
}

// fade-in in loop, and restart after finishing
void loop() {
  unsigned long progress = millis() - fadeStartTime;

  if (progress <= FADE_PEDIOD) {
    long brightness = map(progress, 0, FADE_PEDIOD, 0, 255);
    analogWrite(LED_PIN, brightness);
  }
  else {
    fadeStartTime = millis(); // restart fade again
  }
}
