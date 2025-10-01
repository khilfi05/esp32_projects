#define G_PIN 32  // (Green) LED pin
#define A_PIN 36  // Analog pin

void setup() {
  analogSetAttenuation(ADC_11db);  // Correspond to 3.3v
}

void loop() {
  int analog = analogRead(A_PIN);
  int brightness = map(analog, 0, 4095, 0, 255);
  analogWrite(G_PIN, brightness);
}
