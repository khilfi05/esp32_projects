float floatMap(float x, float in_min, float in_max, float out_min, float out_max) {
  return x / (in_max - in_min) * (out_max - out_min) + out_min;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogSetAttenuation(ADC_11db);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analog = analogRead(36);

  int angle = map(analog, 0, 4095, 0, 300);

  float voltage = floatMap(analog, 0, 4095, 0, 3.3);

  Serial.print("Analog: " + String(analog) + ", Angle: " + String(angle) + ", Voltage: " + String(voltage) + "\n");
}
