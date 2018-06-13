void initLed() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT);
}

void ledBlink(int ledNr, int time) {
  if (ledNr == 0) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(time);
    digitalWrite(LED_BUILTIN, HIGH);
  } else if (ledNr == 1) {
    digitalWrite(2, LOW);
    delay(time);
    digitalWrite(2, HIGH);
  }
}
