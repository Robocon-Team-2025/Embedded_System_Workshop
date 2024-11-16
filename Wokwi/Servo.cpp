#include <ESP32Servo.h>
const int SERVO_PIN = 33;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 180; i++){
    servo.write(i);     
    delay(10);
  }
  for (int i = 180; i>= 0; i--){
    servo.write(i);     
    delay(10);
  }
}
