#include "pitches.h"

const int button1 = 2;
int button1state = 0;
const int button2 = 3;
int button2state = 0;
const int button3 = 4;
int button3state = 0;
const int button4 = 5;
int button4state = 0;
const int button5 = 6;
int button5state = 0;
const int button6 = 7;
int button6state = 0;
const int button7 = 8;
int button7state = 0;
const int button8 = 9;
int button8state = 0;

const int levelbutton = 12;
int levelState = 0;
int levelController = 0;

const int speaker = 13;

int level = 0;
  
int tones[7][8] = {

  { NOTE_C1, NOTE_D1, NOTE_E1, NOTE_F1, NOTE_G1, NOTE_A1, NOTE_B1, NOTE_C2 },
  { NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2, NOTE_C3 },
  { NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4 },
  { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 },
  { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6 },
  { NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6, NOTE_C7 },
  { NOTE_C7, NOTE_D7, NOTE_E7, NOTE_F7, NOTE_G7, NOTE_A7, NOTE_B7, NOTE_C8 }
};

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  pinMode(button8, INPUT);
  pinMode(levelbutton, INPUT);
  
  pinMode(speaker, OUTPUT);
}

void loop() {
  button1state = digitalRead(button1);
  button2state = digitalRead(button2); 
  button3state = digitalRead(button3); 
  button4state = digitalRead(button4); 
  button5state = digitalRead(button5); 
  button6state = digitalRead(button6); 
  button7state = digitalRead(button7); 
  button8state = digitalRead(button8); 
  
  levelState = digitalRead(levelbutton);
  
  if (levelState == HIGH && levelController == 0) {
    
    if (level >= 8) {
      level = 0;
    } else {
      level++;
    }
    levelController = 1;
  } else if(levelState == LOW) {
    levelController = 0; 
  }
  
  if(button1state == HIGH)
  {
      Serial.println("C");
      tone(speaker, tones[level][0], 100);
  } 
  
    if(button2state == HIGH)
  {
      Serial.println("D");
      tone(speaker, tones[level][1], 100);
  } 
  
    if(button3state == HIGH)
  {
      Serial.println("E");
      tone(speaker, tones[level][2], 100);
  } 
  
    if(button4state == HIGH)
  {
      Serial.println("F");
      tone(speaker, tones[level][3], 100);
  } 
  
    if(button5state == HIGH)
  {
      Serial.println("G");
      tone(speaker, tones[level][4], 100);
  } 
  
    if(button6state == HIGH)
  {
      Serial.println("A");
      tone(speaker, tones[level][5], 100);
  } 
  
    if(button7state == HIGH)
  {
      Serial.println("B");
      tone(speaker, tones[level][6], 100);
  } 
  
    if(button8state == HIGH)
  {
      Serial.println("C");
      tone(speaker, tones[level][7], 100);
  } 


  delay(20);
}
