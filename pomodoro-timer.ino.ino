void setup() {
  // Stop button
  pinMode(13, INPUT);

  // Start button
  pinMode(11, INPUT);

  pinMode(9, OUTPUT);

  pinMode(8, OUTPUT);

  // Green #1
  pinMode(7, OUTPUT);

  // Green #2
  pinMode(5, OUTPUT);

  // Red
  pinMode(3, OUTPUT);

}
int time = 25;
void loop() {
  int gameState = 0; // Awaiting
  int stop = digitalRead(13);
  int start = digitalRead(12);
  if (stop == LOW && start == LOW && gameState == 0) {
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);
    digitalWrite(5, LOW);
    delay(200);
    digitalWrite(7, LOW);
  } else {
    if (stop == HIGH && start == LOW && gameState == 0 && time == 25) {
      digitalWrite(9, HIGH);
      delay(1000);
      digitalWrite(9, LOW);
      time = 50;
    } else if (stop == HIGH && start == LOW && gameState == 0 && time == 50) {
      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(8, LOW);
      time = 25;
    } else if (start == HIGH && stop == LOW && gameState == 0 && time == 25) {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(300000);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(300000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(300000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(300000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(3, HIGH);
      delay(300000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(3, LOW);
    } else if (start == HIGH && stop == LOW && gameState == 0 && time == 50) {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(600000);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(600000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(600000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(3, HIGH);
      delay(600000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(3, HIGH);
      delay(600000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(3, LOW);
    }
  }
}
