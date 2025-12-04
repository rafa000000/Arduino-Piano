// Array para armazenar o estado anterior de cada botão
int estadoBotaoAnterior[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

// Mapeamento explícito de botões para LEDs 
const int botaoPinos[] = {2, 3, 4, 5, 6, 7, 9, 10};
const int ledPinos[]   = {13, 12, 11, 1, 0, A0, A1, A2};

void setup() {
  pinMode(9, OUTPUT); // Buzzer passivo no pino 9 (PWM)

  // Define pinos de botões e LEDs
  for (int i = 0; i < 8; i++) {
    pinMode(botaoPinos[i], INPUT);
    pinMode(ledPinos[i], OUTPUT);
  }
}

void loop() {
  // Nota C4 no pino 2 (MAIS GRAVE)
  if (digitalRead(2) == HIGH && estadoBotaoAnterior[2] == LOW) {
    tone(9, 523, 200); // Frequência de C4
    digitalWrite(13, HIGH);
  } else if (digitalRead(2) == LOW && estadoBotaoAnterior[2] == HIGH) {
    digitalWrite(13, LOW);
  }
  estadoBotaoAnterior[2] = digitalRead(2);

  // Nota D4 no pino 3
  if (digitalRead(3) == HIGH && estadoBotaoAnterior[3] == LOW) {
    tone(9, 587, 200); // Frequência de D4
    digitalWrite(12, HIGH);
  } else if (digitalRead(3) == LOW && estadoBotaoAnterior[3] == HIGH) {
    digitalWrite(12, LOW);
  }
  estadoBotaoAnterior[3] = digitalRead(3);

  // Nota E4 no pino 4
  if (digitalRead(4) == HIGH && estadoBotaoAnterior[4] == LOW) {
    tone(9, 659, 200); // Frequência de E4
    digitalWrite(11, HIGH);
  } else if (digitalRead(4) == LOW && estadoBotaoAnterior[4] == HIGH) {
    digitalWrite(11, LOW);
  }
  estadoBotaoAnterior[4] = digitalRead(4);

  // Nota F4 no pino 5
  if (digitalRead(5) == HIGH && estadoBotaoAnterior[5] == LOW) {
    tone(9, 698, 200); // Frequência de F4
    digitalWrite(1, HIGH);
  } else if (digitalRead(5) == LOW && estadoBotaoAnterior[5] == HIGH) {
    digitalWrite(1, LOW);
  }
  estadoBotaoAnterior[5] = digitalRead(5);

  // Nota G4 no pino 6
  if (digitalRead(6) == HIGH && estadoBotaoAnterior[6] == LOW) {
    tone(9, 784, 200); // Frequência de G4
    digitalWrite(0, HIGH);
  } else if (digitalRead(6) == LOW && estadoBotaoAnterior[6] == HIGH) {
    digitalWrite(0, LOW);
  }
  estadoBotaoAnterior[6] = digitalRead(6);

  // Nota A4 no pino 7
  if (digitalRead(7) == HIGH && estadoBotaoAnterior[7] == LOW) {
    tone(9, 880, 200); // Frequência de A4
    digitalWrite(A0, HIGH);
  } else if (digitalRead(7) == LOW && estadoBotaoAnterior[7] == HIGH) {
    digitalWrite(A0, LOW);
  }
  estadoBotaoAnterior[7] = digitalRead(7);

  // Nota B4 no pino 8 (botão no pino 8)
  if (digitalRead(8) == HIGH && estadoBotaoAnterior[8] == LOW) {
    tone(9, 988, 200); // Frequência de B4
    digitalWrite(A1, HIGH);
  } else if (digitalRead(8) == LOW && estadoBotaoAnterior[8] == HIGH) {
    digitalWrite(A1, LOW);
  }
  estadoBotaoAnterior[8] = digitalRead(8);

  // Nota C5 no pino 10 (MAIS AGUDA)
  if (digitalRead(10) == HIGH && estadoBotaoAnterior[10] == LOW) {
    tone(9, 1047, 200); // Frequência de C5
    digitalWrite(A2, HIGH);
  } else if (digitalRead(10) == LOW && estadoBotaoAnterior[10] == HIGH) {
    digitalWrite(A2, LOW);
  }
  estadoBotaoAnterior[10] = digitalRead(10);

  delay(10);
}
