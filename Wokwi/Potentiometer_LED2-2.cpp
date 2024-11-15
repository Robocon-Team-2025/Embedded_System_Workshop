// Loading
// Pin Declaration
const int LEDR_PIN  = 23;
const int LEDG_PIN  = 22;
const int LEDB_PIN  = 21;
const int POT1_PIN  = 13;
const int POT2_PIN  = 12;

// Variables for Loading
int speed = 5;
int wait = 10;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(LEDG_PIN, OUTPUT); // Setup pin 22 as Output pin
  pinMode(LEDB_PIN, OUTPUT); // Setup pin 21 as Output pin
  pinMode(POT1_PIN, INPUT); // Setup pin 13 as Input pin
  pinMode(POT2_PIN, INPUT); // Setup pin 12 as Input pin
}
void turnOn(int pin){
  for (int i = 0; i <= 255; i+=speed){
    speed = analogRead(POT1_PIN);
    wait = analogRead(POT2_PIN);
    speed = map(speed,0,4095,1,10);  // Speed can be change from 1 to 10
    wait = map(wait,0,4095,10,100); // Delay can be change from 10 to 100
    analogWrite(pin,i);
    delay(wait);
  }
}

void turnOff(int pin){
  for (int i = 255; i >= 0; i-=speed){
    speed = analogRead(POT1_PIN);
    wait = analogRead(POT2_PIN);
    speed = map(speed,0,4095,1,10);  // Speed can be change from 1 to 10
    wait = map(wait,0,4095,10,100); // Delay can be change from 10 to 100
    analogWrite(pin,i);
    delay(wait);
  }
  analogWrite(pin,0);
}

void loop() {
  for (int i = 23; i >= 21; i--) turnOn(i);
  for (int i = 21; i <= 23; i++) turnOff(i);
  delay(500);
}

