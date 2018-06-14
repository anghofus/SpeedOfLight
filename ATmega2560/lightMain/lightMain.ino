int i = 0;
int taster = 0;
int phase = 0;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  taster = digitalRead(4);

  if(taster == 1){
    i++;
    if(phase%2){
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      delay(100);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(3000);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      delay(500);
      phase++;
    }
    else{
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      delay(100);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(2000);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      delay(500);
      phase++;
    }
  }

}
