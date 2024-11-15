// LED Loading Bar
// Pin Declaration
const int LEDR_PIN  = 23;
const int LEDG_PIN  = 22;
const int LEDB_PIN  = 21;

// Variables for Loading
const int speed = 5;
const int wait = 10;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(LEDG_PIN, OUTPUT); // Setup pin 22 as Output pin
  pinMode(LEDB_PIN, OUTPUT); // Setup pin 21 as Output pin
}

void turnOn(int pin){
  for (int i = 0; i <= 255; i+=speed){
    analogWrite(pin,i);
    delay(wait);
  }
}

void turnOff(int pin){
  for (int i = 255; i >= 0; i-=speed){
    analogWrite(pin,i);
    delay(wait);
  }
  analogWrite(pin,0);
}

void loop() {
  for (int i = 23; i >= 21; i--) turnOn(i);
  for (int i = 21; i <= 23; i++) turnOff(i);
  delay(1000);
}
