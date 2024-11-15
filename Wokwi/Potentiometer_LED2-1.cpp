#include <Arduino.h>
// Chaser
// Pin Declaration
const int LEDR_PIN  = 23;
const int LEDG_PIN  = 22;
const int LEDB_PIN  = 21;
const int POT1_PIN  = 13;
const int POT2_PIN  = 12;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(LEDG_PIN, OUTPUT); // Setup pin 22 as Output pin
  pinMode(LEDB_PIN, OUTPUT); // Setup pin 21 as Output pin
  pinMode(POT1_PIN, INPUT); // Setup pin 13 as Input pin
  pinMode(POT2_PIN, INPUT); // Setup pin 12 as Input pin
}

void loop() {
  int wait = analogRead(POT_PIN);
  int light = analogRead(POT_PIN);
  wait = map(wait,0,4095,100,1000); // Delay can be change from 100 to 1000
  light = map(wait,0,4095,0,255); // Brightness can be change from 0 to 255
  analogWrite(LEDR_PIN,light);
  delay(wait);
  analogWrite(LEDG_PIN,light);
  delay(wait);
  analogWrite(LEDB_PIN,light);
  delay(wait); 
}
