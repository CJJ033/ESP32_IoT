#define LED 16
#define LDR 34

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(LDR);
  Serial.println(value);
  
  if (value < 1000) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(500);
}
