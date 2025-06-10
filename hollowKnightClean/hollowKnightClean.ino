#include "pitches.h"
#define BUZZER_PIN_1 4

int eighth = 162; // 8
int quarter = 325; // 4
int half = 750; // 2
int whole = 1500; // 1
int durations[] = {
half, half, quarter, quarter, whole, quarter, quarter, half, quarter, quarter, whole,
half, half, quarter, quarter, whole, quarter, quarter, quarter, quarter, half, whole,
half, quarter, quarter, whole, quarter, quarter, whole, quarter, quarter, whole, quarter, quarter, half, half, quarter, quarter, whole,
quarter, quarter, whole, quarter, quarter, whole, half, whole, quarter,
quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
quarter, quarter, quarter, quarter, quarter, whole,
quarter, whole, whole, quarter, quarter, whole, whole, half, whole
};

int melody[] = {
NOTE_C4, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_G3,
NOTE_C4, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_AS3, NOTE_C4,
NOTE_DS3, NOTE_C3, NOTE_G3, NOTE_GS3, NOTE_C3, NOTE_F3, NOTE_G3, NOTE_C3, NOTE_DS3, NOTE_F3, NOTE_AS2, NOTE_DS3, NOTE_D3, NOTE_AS2, NOTE_GS2, NOTE_DS3, NOTE_F3,
NOTE_F2, NOTE_C3, NOTE_F3, NOTE_DS2, NOTE_C3, NOTE_DS3, NOTE_GS2, NOTE_AS2, NOTE_C3, 
NOTE_G3, NOTE_GS3, NOTE_G3, NOTE_GS3, NOTE_G3, NOTE_C3, NOTE_G3, NOTE_GS3, NOTE_G3, NOTE_GS3, NOTE_G3, NOTE_C3,
NOTE_DS3, NOTE_F3, NOTE_DS3, NOTE_F3, NOTE_DS3, NOTE_AS2,
NOTE_B3, NOTE_B3, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_AS4, NOTE_C5
};

void setup() { // setup all the outputs to pinMode
  pinMode(BUZZER_PIN_1, OUTPUT);
  int size = sizeof(durations) / sizeof(int);
  for (int note = 0; note < size; note++) {
    tone(BUZZER_PIN_1, melody[note], durations[note]);
    int pauseBetweenNotes = durations[note]*1.1;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN_1);
  }
}
void loop() {
}