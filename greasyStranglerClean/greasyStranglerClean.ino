#include "pitches.h"
#define BUZZER_PIN_1 4

int eighth = 125; // 8
int quarter = 250; // 4
int half = 500; // 2
int whole = 750; // 1
int durations[] = {
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, eighth,  eighth, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, quarter,
  quarter, quarter, quarter, quarter, quarter, quarter, whole, quarter, whole
};
int melody[] = {
  NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_AS2, 0,
  NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_GS2, NOTE_GS2, 0,
  NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_AS2, 0,
  NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_DS3, NOTE_AS2, NOTE_A3,  NOTE_A3,  0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_GS1, NOTE_GS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_A2,  NOTE_A2,  0,
  NOTE_A3,  NOTE_B3,  NOTE_C4,  NOTE_B3,  NOTE_A3,  NOTE_B3,  NOTE_A3,  0,
  NOTE_A3,  NOTE_B3,  NOTE_C4,  NOTE_B3,  NOTE_A3,  NOTE_D4,  NOTE_D4,  0,
  NOTE_A4,  NOTE_B4,  NOTE_C5,  NOTE_B4,  NOTE_A4,  NOTE_B4,  NOTE_A4,  0,
  NOTE_A4,  NOTE_B4,  NOTE_C5,  NOTE_B4,  NOTE_A4,  NOTE_D5,  NOTE_D5,  0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_GS1, NOTE_GS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_A2,  NOTE_A2,  0,
  NOTE_DS3, NOTE_CS3, NOTE_DS3, NOTE_F3,  NOTE_DS3, NOTE_CS3, NOTE_CS3, 0,
  NOTE_DS3, NOTE_CS3, NOTE_DS3, NOTE_F3,  NOTE_DS3, NOTE_CS3, NOTE_DS3, 0,
  NOTE_DS3, NOTE_CS3, NOTE_DS3, NOTE_F3,  NOTE_DS3, NOTE_CS3, NOTE_CS3, 0,
  NOTE_DS3, NOTE_CS3, NOTE_DS3, NOTE_F3,  NOTE_DS3, NOTE_A3,  NOTE_A3,  0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_GS1, NOTE_GS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,
  NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_DS2, NOTE_AS1, NOTE_A2,  NOTE_A2,  0,
  NOTE_AS1, NOTE_DS2, NOTE_A2,  NOTE_AS2, NOTE_F2,  NOTE_AS1, NOTE_C3,  0,
  NOTE_AS1, NOTE_DS2, NOTE_B2,  NOTE_C3,  NOTE_AS2, NOTE_DS3, 0,
  NOTE_AS1, NOTE_DS2, NOTE_GS2, NOTE_AS2, NOTE_F2,  NOTE_AS1, 0,
  NOTE_G2,  NOTE_F2,  NOTE_DS2, NOTE_AS1, NOTE_AS1, 0,        NOTE_B0,  0,         NOTE_B0
};

void setup() { // setup all the outputs to pinMode
  pinMode(BUZZER_PIN_1, OUTPUT);
  int size = sizeof(durations) / sizeof(int);
  for (int note = 0; note < size; note++) {
    tone(BUZZER_PIN_1, melody[note], durations[note]);
    
    int pauseBetweenNotes = durations[note]*1.2;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN_1);
  }
}
void loop() {
}