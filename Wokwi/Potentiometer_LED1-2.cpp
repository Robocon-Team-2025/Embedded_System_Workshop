// LED Blinking
// Pin Declaration
const int LEDR_PIN  = 23;
const int POT_PIN = 13;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(POT_PIN, INPUT); // Setup pin 13 as Input pin
}

void loop() {
  int wait = analogRead(POT_PIN);
  wait = map(wait,0,4095,100,1000); // Delay can be change from 100 to 1000
  digitalWrite(LEDR_PIN, HIGH); 
  delay(wait); 
  digitalWrite(LEDR_PIN, LOW); 
  delay(wait); 
}
