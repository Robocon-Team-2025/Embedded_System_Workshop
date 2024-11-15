// LED Dimmer
const int LEDR_PIN  = 23;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(LEDR_PIN,i); 
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(LEDR_PIN,i); //
    delay(10);
  }
  delay(1000);
}
