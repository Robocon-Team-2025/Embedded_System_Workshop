// Toggle LED
const int LEDR_PIN = 23;
const int BUTTONR_PIN = 25;

bool debounce = false;
const int deb_time = 100;
unsigned long curr_time = 0;

bool light = false;

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
    light = !light;
  }

  if (light == true) {
    digitalWrite(LEDR_PIN,HIGH);
  }
  else {
    digitalWrite(LEDR_PIN,LOW);
  }
}
