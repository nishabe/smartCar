/*******************************************************************************************************
* Test DC Motors Funtionality
* Created 7/11/16
* 
*
*
*
*******************************************************************************************************/

int motor_left[] = {9, 6};
int motor_right[] = {11, 10};

void setup() {
  Serial.begin(9600);
  //Setup Motors
  for (int i = 0; i < 2; i++)
  {
    pinMode(motor_left[i], OUTPUT);
    pinMode(motor_right[i], OUTPUT);
  }
 

}

  void turn_around()
  {
    digitalWrite(motor_left[0], HIGH);
    digitalWrite(motor_left[1], LOW);
    digitalWrite(motor_right[0], HIGH);
    digitalWrite(motor_right[1], LOW);
    delay(600);
  }

void loop()
{
  turn_around();
}

