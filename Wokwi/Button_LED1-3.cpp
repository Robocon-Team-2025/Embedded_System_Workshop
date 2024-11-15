// Toggle Between Blinker and Dimmer
const int LEDR_PIN = 23;
const int BUTTONR_PIN = 25;

bool debounce = false;
const int deb_time = 100;
unsigned long curr_time = 0;

bool blink = false;
const int wait = 300;
void setup() {
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(BUTTONR_PIN, INPUT_PULLUP);
}

void loop(){
  if (millis() - curr_time > deb_time){
    curr_time = millis();
    debounce = true;
  }
  if (digitalRead(BUTTONR_PIN) == LOW && debounce == true){
    debounce = false;
    blink = !blink;
  }

  if (blink == true) {
    analogWrite(LEDR_PIN,255);
    delay(wait);
    analogWrite(LEDR_PIN,0);
    delay(wait);
  }
  else {
    // LED Dimmer
    for (int i = 0; i <= 255; i++) {
      analogWrite(LEDR_PIN,i); 
      delay(10);
    }
    for (int i = 255; i >= 0; i--) {
      analogWrite(LEDR_PIN,i);
      delay(10);
    }
    blink = true;
  }
}
