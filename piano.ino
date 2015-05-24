#include "pitches.h"

const int button1 = 10;
int button1state = 0;
const int button2 = 11;
int button2state = 0;


const int speaker = 2;
  
void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(speaker, OUTPUT);
}

void loop() {
  button1state = digitalRead(button1);
  button2state = digitalRead(button2);
  
  
  if(button1state == HIGH)
  {
      Serial.println("C");
      tone(2, NOTE_C4, 100);
  }
  if(button2state == HIGH)
  {
    Serial.println("G");
      tone(2, NOTE_G4, 100);
  }

  delay(20);
}
