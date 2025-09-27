const int PORT = 14;

void setup() {
  pinMode(PORT, OUTPUT);
}

// Word to morse sequence module
String wordToMorse(String word) {
  String morse = "";
  word.toLowerCase(); // Convert to lowercase for consistent matching
  
  for (int i = 0; i < word.length(); i++) {
    char a = word[i];
    
    if (a == 'a') {
      morse += ".-";
    }
    else if (a == 'b') {
      morse += "-...";
    }
    else if (a == 'c') {
      morse += "-.-.";
    }
    else if (a == 'd') {
      morse += "-..";
    }
    else if (a == 'e') {
      morse += ".";
    }
    else if (a == 'f') {
      morse += "..-.";
    }
    else if (a == 'g') {
      morse += "--.";
    }
    else if (a == 'h') {
      morse += "....";
    }
    else if (a == 'i') {
      morse += "..";
    }
    else if (a == 'j') {
      morse += ".---";
    }
    else if (a == 'k') {
      morse += "-.-";
    }
    else if (a == 'l') {
      morse += ".-..";
    }
    else if (a == 'm') {
      morse += "--";
    }
    else if (a == 'n') {
      morse += "-.";
    }
    else if (a == 'o') {
      morse += "---";
    }
    else if (a == 'p') {
      morse += ".--.";
    }
    else if (a == 'q') {
      morse += "--.-";
    }
    else if (a == 'r') {
      morse += ".-.";
    }
    else if (a == 's') {
      morse += "...";
    }
    else if (a == 't') {
      morse += "-";
    }
    else if (a == 'u') {
      morse += "..-";
    }
    else if (a == 'v') {
      morse += "...-";
    }
    else if (a == 'w') {
      morse += ".--";
    }
    else if (a == 'x') {
      morse += "-..-";
    }
    else if (a == 'y') {
      morse += "-.--";
    }
    else if (a == 'z') {
      morse += "--..";
    }
    else if (a == ' ') {
      morse += "/"; // Word space
    }
    else {
      throw "Invalid character given. Given \"" + String(a) + "\"";
    }
    morse += " "; // Letter space
  }
  return morse;
}

// Morse sequence to light transmission module
void morseToTransmission(String morse) {
  for (int i = 0; i < morse.length(); i++) {
    char a = morse[i];
    if (a == '.') {
      digitalWrite(PORT, HIGH);
      delay(200);
      digitalWrite(PORT, LOW);
    }
    else if (a == '-') {
      digitalWrite(PORT, HIGH);
      delay(600);
      digitalWrite(PORT, LOW);
    }
    else if (a == ' ') {
      delay(1000);
    }
    else {
      throw "Invalid morse character given. Given \"" + String(a) + "\"";
    }
    delay(200);
  }
}

void loop() {
  String word = "khilfi";
  String morse = wordToMorse(word);
  morseToTransmission(morse);
  delay(3600);
}
