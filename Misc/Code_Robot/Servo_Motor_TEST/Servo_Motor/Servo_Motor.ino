/*******************************************************************************************************
* Test Servo Motor Functionality
* Created 7/11/16
* 
*
*
*
*******************************************************************************************************/
#include <Servo.h>
#define pinServo 4

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(pinServo);
}

void loop() {
  myServo.write(0);
  delay(5000);
  myServo.write(25);
  delay(5000);
  myServo.write(50);
  delay(5000);
  myServo.write(75);
  delay(5000);
  myServo.write(110);
  delay(5000);
  myServo.write(145);
  delay(5000);
  myServo.write(180);
  delay(5000);
}
