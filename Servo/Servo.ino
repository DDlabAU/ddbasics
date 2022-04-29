#include "DDservo.h"
#include "general.h"

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  //the servoType is the degrees the servo will move. This is either 180 or 360.
  servoType=180;
  //minP() places the servo in its postion with the lowest value. Likewise maxP(); places the servo in it's position with the highest value
  minP();
}

void loop() {
  //sweepTo has two parameters:
  //1st: the position you want the servo to go indicated as a number between 0 and 100
  //2nd: The time for which it takes to moves to the final position, in seconds
  sweepTo(100,5); //means sweep to position 100 in 5 seconds
  sweepTo(0,1); //means sweep to position 0 in 1 seconds
}
