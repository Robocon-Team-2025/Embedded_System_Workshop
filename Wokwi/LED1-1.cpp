// LED Blinking
// Pin Declaration
const int LEDR_PIN  = 23;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
}

void loop() {
  digitalWrite(LEDR_PIN, HIGH); // Turn On LED
  delay(500); // 500 millisecond delay
  digitalWrite(LEDR_PIN, LOW); // Turn Off LEd
  delay(500); // 500 millisecond delay
}
