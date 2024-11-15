#include <Arduino.h>
// Chaser
// Pin Declaration
const int LEDR_PIN  = 23;
const int LEDG_PIN  = 22;
const int LEDB_PIN  = 21;
const int POT_PIN  = 13;

// Variable for Chaser
bool light = false;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(LEDG_PIN, OUTPUT); // Setup pin 22 as Output pin
  pinMode(LEDB_PIN, OUTPUT); // Setup pin 21 as Output pin
  pinMode(POT_PIN, INPUT); // Setup pin 13 as Input pin
}

void loop() {
  int wait = analogRead(POT_PIN);
  wait = map(wait,0,4095,100,1000); // Delay can be change from 100 to 1000
  light = !light;
  digitalWrite(LEDR_PIN,light);
  delay(wait);
  digitalWrite(LEDG_PIN,light);
  delay(wait);
  digitalWrite(LEDB_PIN,light);
  delay(wait); 
}
