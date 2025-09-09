#define LED1 18
#define LED2 19

unsigned long prevMillis = 0;
const long interval = 1000;

bool ledState = false;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - prevMillis >= interval) {
    prevMillis = currentMillis;

    ledState = !ledState;

    if (ledState) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      Serial.println("LED1 ON, LED2 OFF");
    } else {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      Serial.println("LED1 OFF, LED2 ON");
    }
  }
}
