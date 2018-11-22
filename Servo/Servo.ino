#include <Servo.h>
#include "servoCode.h"

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  servoType=180;
  minP();
}

void loop() {
  sweepTo(180,5);
  sweepTo(0,1);
}
