// C++ code
//
int LED_VERDE = 8;
int LED_AMARELO = 9;
int LED_VERMELHO = 10;
int BUZZER = 11;

void setup() {
  Serial.begin(9600);

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int LDR = analogRead(A0);
  Serial.println(LDR);

  // LED VERDER = CONDIÇÃO BOA
  if (LDR < 400) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    noTone(BUZZER);
  }

  // LED AMARELO = NIVEL DE ALERTA
  else if (LDR >= 400 && LDR <= 600) {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    noTone(BUZZER);
  }

  // LED VERMELHO + BUZZER = CONDIÇÃO CRÍTICA
  else {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, HIGH);

    // BUZZER APITA 3 VEZES
    for (int i = 0; i < 3; i++) {
      tone(BUZZER, 1500);
      delay(300);
      noTone(BUZZER);
      delay(300);
    }

    // ESPERA 2 SEGUNDOS PARA REPITIR
    delay(2000);
  }

  delay(200); // DELEY PARA ESTABILIDADE
}