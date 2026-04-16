void setup() {
  pinMode(9, OUTPUT); // Pin 9 supports PWM fading
}

void loop() {
  int sensorValue = analogRead(A0);    // Read knob (0-1023)
  int brightness = sensorValue / 4;   // Scale to 0-255
  analogWrite(9, brightness);         // Fade LED
  delay(10);
}
