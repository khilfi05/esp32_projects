#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523

int S_PIN = 5;  // Sound pin
int R_PIN = 32;  // Red LED pin
int Y_PIN = 25;  // Yellow LED pin
int G_PIN = 27;  // Green LED pin

void setup() {
  pinMode(R_PIN, OUTPUT);
  pinMode(Y_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
}

void loop() {
  // Animate light RYG oscillate in one second at 0.33s interval while playing sound from note C4 to B4 at 1s interval
  int NOTES[] = { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 };
  int LEDS[] = { R_PIN, Y_PIN, G_PIN };
  for (int i = 0; i < 8; i++) {
    tone(S_PIN, NOTES[i]);
    for (int j = 0; j < 3; j++) {
      digitalWrite(LEDS[j], HIGH);
      delay(333);
      digitalWrite(LEDS[j], LOW);
    }
  }
}
