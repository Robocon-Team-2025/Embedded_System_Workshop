// Hold to Turn on LED
const int LEDR_PIN = 23;
const int BUTTONR_PIN = 25;

void setup() {
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(BUTTONR_PIN, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(BUTTONR_PIN) == LOW){
    digitalWrite(LEDR_PIN,HIGH);
  } 
  else {
    digitalWrite(LEDR_PIN,LOW);
  }
}
