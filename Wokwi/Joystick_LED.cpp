// Controlling LED using Joystick
// Pin Declaration
const int LEDR_PIN  = 23;
const int LEDG_PIN  = 22;
const int LEDB_PIN  = 21;
const int Button_PIN = 14;
const int VERT_PIN  = 13;
const int HORZ_PIN  = 12;

// Variables for Button
bool debounce = false;
const int deb_time = 100;
unsigned long curr_time = 0;
bool start = false;

// Variables for LED
int brightR = 0;
int brightG = 0;
bool lightB = false;

void setup() {
  pinMode(LEDR_PIN, OUTPUT); // Setup pin 23 as Output pin
  pinMode(LEDG_PIN, OUTPUT); // Setup pin 22 as Output pin
  pinMode(LEDB_PIN, OUTPUT); // Setup pin 21 as Output pin
  pinMode(Button_PIN, INPUT_PULLUP); // Setup pin 14 as Input pin
  pinMode(VERT_PIN, INPUT); // Setup pin 13 as Input pin
  pinMode(HORZ_PIN, INPUT); // Setup pin 12 as Input pin
}

void loop() {
  brightR = analogRead(VERT_PIN);
  brightR = map(brightR,0,4095,0,255);
  brightG = analogRead(HORZ_PIN);
  brightG = map(brightG,0,4095,0,255);
  
  analogWrite(LEDR_PIN,brightR);
  analogWrite(LEDG_PIN,brightG);

  if (millis() - curr_time > deb_time){
    curr_time = millis();
    debounce = true;
  }
  if (digitalRead(Button_PIN) == LOW && debounce == true){
    debounce = false;
    lightB = !lightB;
  } 

  if (lightB == true)  {
    digitalWrite(LEDB_PIN,HIGH);
  }
  else {
    digitalWrite(LEDB_PIN,LOW);  
  }

}

