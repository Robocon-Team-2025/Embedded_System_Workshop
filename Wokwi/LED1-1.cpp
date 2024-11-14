// LED Blinking
const int LEDR_PIN  = 23;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
}

void loop() {
  digitalWrite(LEDR_PIN, HIGH);
  delay(500); // 500 millisecond delay
  digitalWrite(LEDR_PIN, LOW);
  delay(500); // 500 millisecond delay
}
