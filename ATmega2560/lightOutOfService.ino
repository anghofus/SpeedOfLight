void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1500);
  digitalWrite(2, HIGH);
  delay(1500);
}
