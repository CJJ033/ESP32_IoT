#define LED1 16
#define LED2 17

unsigned long prevMillis = 0;
const long interval = 1000;

bool ledState = false;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - prevMillis >= interval) {
    prevMillis = currentMillis;

    ledState = !ledState;

    if (ledState) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
    } else {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
    }
  }
}