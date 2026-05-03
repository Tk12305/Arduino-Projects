
const int LED_PIN = 13;
const int DOT = 200;  // short blink duration
const int DASH = 600; // long blink duration


void shortBlink() {
  digitalWrite(LED_PIN, HIGH);
  delay(DOT);
  digitalWrite(LED_PIN, LOW);
  delay(DOT);
}

void longBlink() {
  digitalWrite(LED_PIN, HIGH);
  delay(DASH);
  digitalWrite(LED_PIN, LOW);
  delay(DOT);
}

void sos() {
  // S = three dots
  shortBlink();
  shortBlink();
  shortBlink();

  delay(300);  // gap between letters

  // O = three dashes
  longBlink();
  longBlink();
  longBlink();

  delay(300);  // gap between letters

  // S = three dots
  shortBlink();
  shortBlink();
  shortBlink();

  delay(1500);  // pause before repeating
}

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("SOS started!");
}

void loop() {
  sos();
}