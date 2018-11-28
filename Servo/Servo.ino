#include "servoCode.h"

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  //the servoType is the degrees the servo will move. This is either 180 or 360.
  servoType=180;
  //minP places the servo in it's postion with the lowest value. Likewise maxP(); places the servo in it's position with the highest value
  minP();
}

void loop() {
  //sweet to has two parameters
  //1st: the position you want the servo to go indicated as a number between 0 and 100
  //2nd: The speed at which it moves to this position
  sweepTo(100,5);
  sweepTo(0,1);
}
