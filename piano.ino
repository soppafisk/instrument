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

const int speaker = 13;
  
void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);
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
  
  if(button1state == HIGH)
  {
      Serial.println("C");
      tone(speaker, NOTE_C4, 100);
  } 
  
    if(button2state == HIGH)
  {
      Serial.println("D");
      tone(speaker, NOTE_D4, 100);
  } 
  
    if(button3state == HIGH)
  {
      Serial.println("C");
      tone(speaker, NOTE_E4, 100);
  } 
  
    if(button4state == HIGH)
  {
      Serial.println("släp");
      tone(speaker, NOTE_F4, 100);
  } 
  
    if(button5state == HIGH)
  {
      Serial.println("C");
      tone(speaker, NOTE_G4, 100);
  } 
  
    if(button6state == HIGH)
  {
      Serial.println("C");
      tone(speaker, NOTE_A4, 100);
  } 
  
    if(button7state == HIGH)
  {
      Serial.println("C");
      tone(speaker, NOTE_B4, 100);
  } 
  
    if(button8state == HIGH)
  {
      Serial.println("C");
      tone(speaker, NOTE_C5, 100);
  } 


  delay(20);
}
