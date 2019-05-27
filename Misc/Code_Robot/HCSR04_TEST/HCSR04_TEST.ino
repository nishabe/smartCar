/*******************************************************************************************************
* Test HC-SR04 Sensor Distance
* Created 7/11/16
* 
*
*
*
*******************************************************************************************************/
#define trig 3
#define echo 2

long duration, distance;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration / 58;

  delay(100);
  Serial.print("Distance: ");
  Serial.println(distance);
}

