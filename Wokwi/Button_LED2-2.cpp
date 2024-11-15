// Multiple Function
// Pin Declaration
const int LEDR_PIN = 23;
const int LEDG_PIN = 22;
const int LEDB_PIN = 21;
const int BUTTONR_PIN = 25;
const int BUTTONG_PIN = 26;
const int BUTTONB_PIN = 27;

// Variables for Button
bool debounce = false;
const int deb_time = 100;
unsigned long curr_time = 0;

// Choice of Function
int choice = 0; // Function: 0 - Off , 1 - Chaser, 2 - Loading, 3 - Alternate

// Variables for Chaser 
bool chase = false;
const int wait = 100;

// Variables for Loading
const int speed = 5;

// Variables for Alternate
bool on = false;

void setup() {
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDG_PIN, OUTPUT);
  pinMode(LEDB_PIN, OUTPUT);
  pinMode(BUTTONR_PIN, INPUT_PULLUP);
  pinMode(BUTTONG_PIN, INPUT_PULLUP);
  pinMode(BUTTONB_PIN, INPUT_PULLUP);
}

void readButton(int pin,int i){
  if (digitalRead(pin) == LOW && debounce == true){
    debounce = false;
    choice = i;
    analogWrite(LEDR_PIN,0);
    analogWrite(LEDG_PIN,0);
    analogWrite(LEDB_PIN,0); 
  }
}

void Chaser() {
  int light = 0;
  chase = !chase;
  if (chase == true) {
    light = 255;
  } 
  else {
    light = 0;
  }
  analogWrite(LEDR_PIN,light);
  delay(wait);
  analogWrite(LEDG_PIN,light);
  delay(wait);
  analogWrite(LEDB_PIN,light);
  delay(wait);
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

void loading() {
  for (int i = 23; i >= 21; i--) turnOn(i);
  for (int i = 21; i <= 23; i++) turnOff(i);
  delay(1000);
  choice = 0;
} 

void alternate(){
  int light = 0;
  on = !on;
  if (on == true) {
    light = 255;
  } 
  else {
    light = 0;
  }
  analogWrite(LEDR_PIN,light);
  analogWrite(LEDG_PIN,!light);
  analogWrite(LEDB_PIN,light);
  delay(500);
}

void loop() {
  if (millis() - curr_time > deb_time){
    curr_time = millis();
    debounce = true;
  }
  readButton(BUTTONR_PIN,1);
  readButton(BUTTONG_PIN,2);
  readButton(BUTTONB_PIN,3);

  switch(choice) {
    case 0:
      analogWrite(LEDR_PIN,0);
      analogWrite(LEDG_PIN,0);
      analogWrite(LEDB_PIN,0);
      break;
    case 1:
      Chaser();
      break;
    case 2:
      loading();
      break;
    case 3:
      alternate();
      break;
    default:
      break;
  }
}
