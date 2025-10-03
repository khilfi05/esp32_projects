#define L_PIN  27
#define IR_PIN 12

void setup() {
  pinMode(L_PIN, OUTPUT);
  pinMode(IR_PIN, INPUT);
}

void loop() {
  digitalWrite(L_PIN, !digitalRead(IR_PIN));
}
