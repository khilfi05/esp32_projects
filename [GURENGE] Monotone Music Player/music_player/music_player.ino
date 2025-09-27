#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
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
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186

int S_PIN = 5;   // Sound pin
int R_PIN = 32;  // Red LED pin
int Y_PIN = 25;  // Yellow LED pin
int G_PIN = 27;  // Green LED pin

void setup() {
  pinMode(R_PIN, OUTPUT);
  pinMode(Y_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
}

// Change notes to sound module (low-memory requirements, suitable for very large songs, synchronous processing)
void notesToSound(String notes, int bpm) {
  notes += " ";
  char prev = notes[0];
  String note = String(notes[0]);
  String beat = "";

  // Use a finite state automata
  for (int i = 1; i < notes.length(); i++) {
    char cur = notes[i];
    if (prev == ' ') {

      if (isDigit(cur)) {
        while (cur != ' ') {
          beat += String(cur);
          i++;
          cur = notes[i];
        }

        int sound = 0;

        if (note == "C3") {
          sound = NOTE_C3;
        }
        else if (note == "CS3") {
          sound = NOTE_CS3;
        }
        else if (note == "D3") {
          sound = NOTE_D3;
        }
        else if (note == "DS3") {
          sound = NOTE_DS3;
        }
        else if (note == "E3") {
          sound = NOTE_E3;
        }
        else if (note == "F3") {
          sound = NOTE_F3;
        }
        else if (note == "FS3") {
          sound = NOTE_FS3;
        }
        else if (note == "G3") {
          sound = NOTE_G3;
        }
        else if (note == "GS3") {
          sound = NOTE_GS3;
        }
        else if (note == "A3") {
          sound = NOTE_A3;
        }
        else if (note == "AS3") {
          sound = NOTE_AS3;
        }
        else if (note == "B3") {
          sound = NOTE_B3;
        }
        else if (note == "C4") {
          sound = NOTE_C4;
        }
        else if (note == "CS4") {
          sound = NOTE_CS4;
        }
        else if (note == "D4") {
          sound = NOTE_D4;
        }
        else if (note == "DS4") {
          sound = NOTE_DS4;
        }
        else if (note == "E4") {
          sound = NOTE_E4;
        }
        else if (note == "F4") {
          sound = NOTE_F4;
        }
        else if (note == "FS4") {
          sound = NOTE_FS4;
        }
        else if (note == "G4") {
          sound = NOTE_G4;
        }
        else if (note == "GS4") {
          sound = NOTE_GS4;
        }
        else if (note == "A4") {
          sound = NOTE_A4;
        }
        else if (note == "AS4") {
          sound = NOTE_AS4;
        }
        else if (note == "B4") {
          sound = NOTE_B4;
        }
        else if (note == "C5") {
          sound = NOTE_C5;
        }
        else if (note == "CS5") {
          sound = NOTE_CS5;
        }
        else if (note == "D5") {
          sound = NOTE_D5;
        }
        else if (note == "DS5") {
          sound = NOTE_DS5;
        }
        else if (note == "E5") {
          sound = NOTE_E5;
        }
        else if (note == "F5") {
          sound = NOTE_F5;
        }
        else if (note == "FS5") {
          sound = NOTE_FS5;
        }
        else if (note == "G5") {
          sound = NOTE_G5;
        }
        else if (note == "GS5") {
          sound = NOTE_GS5;
        }
        else if (note == "A5") {
          sound = NOTE_A5;
        }
        else if (note == "AS5") {
          sound = NOTE_AS5;
        }
        else if (note == "B5") {
          sound = NOTE_B5;
        }
        else if (note == "C6") {
          sound = NOTE_C6;
        }
        else if (note == "CS6") {
          sound = NOTE_CS6;
        }
        else if (note == "D6") {
          sound = NOTE_D6;
        }
        else if (note == "DS6") {
          sound = NOTE_DS6;
        }
        else if (note == "E6") {
          sound = NOTE_E6;
        }
        else if (note == "F6") {
          sound = NOTE_F6;
        }
        else if (note == "FS6") {
          sound = NOTE_FS6;
        }
        else if (note == "G6") {
          sound = NOTE_G6;
        }
        else if (note == "GS6") {
          sound = NOTE_GS6;
        }
        else if (note == "A6") {
          sound = NOTE_A6;
        }
        else if (note == "AS6") {
          sound = NOTE_AS6;
        }
        else if (note == "B6") {
          sound = NOTE_B6;
        }
        else if (note == "C7") {
          sound = NOTE_C7;
        }
        else if (note == "CS7") {
          sound = NOTE_CS7;
        }
        else if (note == "D7") {
          sound = NOTE_D7;
        }
        else if (note == "DS7") {
          sound = NOTE_DS7;
        }
        else if (note == "E7") {
          sound = NOTE_E7;
        }
        else if (note == "F7") {
          sound = NOTE_F7;
        }
        else if (note == "FS7") {
          sound = NOTE_FS7;
        }
        else if (note == "G7") {
          sound = NOTE_G7;
        }
        else if (note == "GS7") {
          sound = NOTE_GS7;
        }
        else if (note == "A7") {
          sound = NOTE_A7;
        }
        else if (note == "AS7") {
          sound = NOTE_AS7;
        }
        else if (note == "B7") {
          sound = NOTE_B7;
        }
        else if (note == "C8") {
          sound = NOTE_C8;
        }

        int n = 0;
        if (note != "R") {
          n = random(1, 4);
        }
        int breaks = 60.0 / bpm * 100;
        int duration = beat.toFloat() * 60.0 / bpm * 1000 - breaks;

        int leds[] = { R_PIN, Y_PIN, G_PIN };
        tone(S_PIN, sound);
        for (int i = 0; i < n; i++) {
          digitalWrite(leds[int(random(0, 3))], HIGH);
        }
        delay(duration);
        for (int i = 0; i < 3; i++) {
          digitalWrite(leds[i], LOW);
        }
        tone(S_PIN, 0);
        delay(breaks);
        note = "";
        beat = "";
      }
      else {
        note += cur;
      }
    }
    else {
      if (isAlphaNumeric(cur)) {
        note += cur;
      }
    }
    prev = cur;
  }
}

void loop() {
  String TWINKLE_TWINKLE_LITTLE_STAR_NOTES = "C4 1 C4 1 G4 1 G4 1 A4 1 A4 1 G4 2 F4 1 F4 1 E4 1 E4 1 D4 1 D4 1 C4 2 G4 1 G4 1 F4 1 F4 1 E4 1 E4 1 D4 2 G4 1 G4 1 F4 1 F4 1 E4 1 E4 1 D4 2 C4 1 C4 1 G4 1 G4 1 A4 1 A4 1 G4 2 F4 1 F4 1 E4 1 E4 1 D4 1 D4 1 C4 2";  
  String TAKE_FIVE = "E4 0.5 F4 0.5 G4 0.5 E4 0.2 G4 0.2 F4 0.2 E4 0.2 D4 0.2 C4 1.5 D4 0.33 E4 0.33 D4 0.33 C4 0.5 A3 1.5 E4 0.5 F4 0.5 G4 0.5 E4 0.2 G4 0.2 F4 0.2 E4 0.2 D4 0.2 C4 1.5 D4 0.33 E4 0.33 D4 0.33 C4 0.5 A3 2";
  String FUR_ELISE = "E5 0.33 DS5 0.33 E5 0.33 DS5 0.33 E5 0.33 B4 0.33 D5 0.33 C5 0.33 A4 1 C4 0.5 E4 0.5 A4 0.5 B4 1 E4 0.5 GS4 0.5 B4 0.5 C5 1";
  String GURENGE = "G5 0.75 FS5 0.75 G5 2 R 0.5 G5 0.75 FS5 0.75 G5 1.5 R 0.5 G4 0.5 G5 0.75 FS5 0.75 E5 1.5 D5 0.5 D5 2.5 R 0.5 B4 1 D5 0.5 E5 2 R 0.5 E5 1 G5 0.5 A5 2 R 0.5 G5 1 A5 0.5 B5 4 R 1 D5 1 D5 1 B5 1 A5 0.5 B5 0.5 D6 0.5 B5 0.5 A5 0.5 B5 0.25 B5 0.25 R 0.5 G5 0.5 A5 0.5 B5 0.5 D6 0.5 B5 0.5 A5 0.5 B5 0.25 B5 0.25 R 0.5 D5 0.5 D5 0.5 G5 0.25 G5 0.75 D5 0.5 D5 0.5 G5 0.5 A5 0.5 G5 0.5 D6 1 C6 1 B5 0.75 A5 0.75 G5 0.5 G5 1";
  String GURENGE_CONTINUE = "R 0.5 G5 1 A5 0.5 B5 0.5 A5 1 R 0.5 D5 0.5 A5 1 B5 0.5 D6 0.5 B5 3.5 R 2 D5 1 D5 1 B5 1 A5 0.5 B5 0.5 D6 0.5 B5 0.5 A5 0.5 B5 0.25 B5 0.25 R 0.5 G5 0.25 G5 0.25 A5 0.5 B5 0.5 D6 0.5 B5 0.5 A5 0.5 B5 0.25 G5 0.25 R 0.5 G5 0.5 G5 1 A5 0.5 B5 1 B5 0.5 G6 0.5 FS6 1.5 D6 1 B5 0.75 A5 0.75 G5 0.5 G5 1 R 0.5 G5 1 A5 0.5 B5 0.5 A5 1.5 R 0.5 A5 0.5 A5 1 B5 1 E5 0.75 D5 0.75 E5 0.75 D5 0.75 E5 0.5 E5 1.5 R 3";
  notesToSound(GURENGE, 130);
  notesToSound(GURENGE_CONTINUE, 130);
}
