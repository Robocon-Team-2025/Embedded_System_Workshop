#include <Arduino.h>
// LED Chaser
const int LEDR_PIN  = 23;
const int LEDG_PIN  = 22;
const int LEDB_PIN  = 21;
const int wait = 100;
bool light = false;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(LEDG_PIN, OUTPUT); // Setup pin 22 as Output pin
  pinMode(LEDB_PIN, OUTPUT); // Setup pin 21 as Output pin
}

void loop() {
  light = !light;
  digitalWrite(LEDR_PIN,light);
  delay(wait);
  digitalWrite(LEDG_PIN,light);
  delay(wait);
  digitalWrite(LEDB_PIN,light);
  delay(wait);
}
