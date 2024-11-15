// Manual LED Dimmer
// Pin Declaration

const int LEDR_PIN = 23;
const int POT_PIN = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(POT_PIN); // Values: 0 ~ 4095
  // The map() function takes an input value from one range 
  // and converts it to a proportional value in another range
  light = map(light,0,4095,0,255); 
  analogWrite(LEDR_PIN,light);
}

// The formula used for the map function
// output = (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow;
