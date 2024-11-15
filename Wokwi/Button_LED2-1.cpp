// Multiple LED Toggle Button
const int LEDR_PIN = 23;
const int LEDG_PIN = 22;
const int LEDB_PIN = 21;
const int BUTTONR_PIN = 25;
const int BUTTONG_PIN = 26;
const int BUTTONB_PIN = 27;

bool debounce = false;
const int deb_time = 100;
unsigned long curr_time = 0;

bool light[3] = {0,0,0}; // Index: Red - 0, Green - 1 , Blue - 2

void setup() {
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDG_PIN, OUTPUT);
  pinMode(LEDB_PIN, OUTPUT);
  pinMode(BUTTONR_PIN, INPUT_PULLUP);
  pinMode(BUTTONG_PIN, INPUT_PULLUP);
  pinMode(BUTTONB_PIN, INPUT_PULLUP);
}

void readButton(int pin,int led){
  if (digitalRead(pin) == LOW && debounce == true){
    debounce = false;
    light[led] = !light[led];
  } 
}

void toggleLight(int pin, int led){
  if(light[led] == true) {
    digitalWrite(pin, HIGH);
  }
  else {
    digitalWrite(pin,LOW);
  }
}

void loop() {
  if (millis() - curr_time > deb_time){
    curr_time = millis();
    debounce = true;
  }
  readButton(BUTTONR_PIN,0);
  readButton(BUTTONG_PIN,1);
  readButton(BUTTONB_PIN,2);

  toggleLight(LEDR_PIN,0);
  toggleLight(LEDG_PIN,1);
  toggleLight(LEDB_PIN,2);
}
