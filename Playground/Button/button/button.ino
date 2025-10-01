#define B_PIN 14
#define Y_PIN 25

int currentState;

void setup() {
  Serial.begin(9600);
  pinMode(B_PIN, INPUT_PULLUP);
  pinMode(Y_PIN, OUTPUT);
}

void loop() {
  currentState = digitalRead(B_PIN);

  if (currentState == LOW) {
    digitalWrite(Y_PIN, LOW);
  } else {
    digitalWrite(Y_PIN, HIGH);
  }
}
