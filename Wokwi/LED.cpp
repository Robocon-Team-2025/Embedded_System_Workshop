#define LEDR_PIN 23
#define LEDG_PIN 22
#define LEDB_PIN 21
#define BUTTONR_PIN 25
#define BUTTONG_PIN 26
#define BUTTONB_PIN 27
#define POT_PIN 13

char choice = '3';
bool one = true;
// Store the state of button
enum push {RED,GREEN,BLUE};
bool Light[3] = {0,0,0};

void setup() {
  Serial.begin(115200);
  Serial.println("Start");
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDG_PIN, OUTPUT);
  pinMode(LEDB_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
  pinMode(BUTTONR_PIN, INPUT_PULLDOWN);
  pinMode(BUTTONG_PIN, INPUT_PULLDOWN);
  pinMode(BUTTONB_PIN, INPUT_PULLDOWN);
}

void loop() {
  static bool once = true;
  if (once){
    Serial.println("Choose which function to run: Dimmer(1),Chaser(2) or Button(3): ");
    while(1){
      if (Serial.available()){
        choice = Serial.read();
        Serial.read();
        break;
      }
    }
    once = false;
  }
  else{
    if (Serial.available()){
        if (Serial.read() == '0'){
          choice = '0';
          Serial.read();
          analogWrite(LEDR_PIN,0);
          analogWrite(LEDG_PIN,0);
          analogWrite(LEDB_PIN,0);
        }
    }
  }
  switch(choice){
    case '1':
      dimmer();
      break;
    case '2':
      chaser();
      break;
    case '3':
      button();
      break;
    case '0':
      once = true;
      one = true;
      break;
    default:
      Serial.println("Choice Unavailable. Please Try again.");
      once = true;
      one = true;
      break;
  }
}

void dimmer(){
  if (one) {
    Serial.println("Enter 0 to restart the program");
    one = false;
  }
  int potentio = analogRead(POT_PIN);
  potentio = map(potentio,0,4095,0,255);
  analogWrite(LEDR_PIN,potentio);
  analogWrite(LEDG_PIN,potentio);
  analogWrite(LEDB_PIN,potentio);
}


void chaser(){
  if (one) {
    Serial.println("Enter 0 to restart the program");
    one = false;
  }
  static bool state = false;
  state = !state;
  int num = 0;
  if (state) num = 255;
  analogWrite(LEDR_PIN,num);
  delay(100);
  analogWrite(LEDG_PIN,num);
  delay(100);
  analogWrite(LEDB_PIN,num);
  delay(100);
}

void button(){
  if (one) {
    Serial.println("Enter 0 to restart the program");
    one = false;
  }
  static unsigned long time = 0UL;
  static bool debounce = false;
  if(millis() - time > 100){
    time = millis();
    debounce = true;
  }

  if(debounce){
    debounce = false;
    if(digitalRead(BUTTONR_PIN)) Light[RED] = !Light[RED];
    if(digitalRead(BUTTONG_PIN)) Light[GREEN] = !Light[GREEN];
    if(digitalRead(BUTTONB_PIN)) Light[BLUE] = !Light[BLUE];
  }

  if(Light[RED]) analogWrite(LEDR_PIN,255); else analogWrite(LEDR_PIN,0);
  if(Light[GREEN]) analogWrite(LEDG_PIN,255); else analogWrite(LEDG_PIN,0);
  if(Light[BLUE]) analogWrite(LEDB_PIN,255); else analogWrite(LEDB_PIN,0);
}
