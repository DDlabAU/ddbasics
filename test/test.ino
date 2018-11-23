#include "Potmeter.h"
#include "ServoCode.h"
#include "LED.h"

void setup(){
  pixels.begin();
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  servoType=180;
  minP();
}

void loop(){
  goTo(getValue(A0));
  ledOn(1, green, getValue(A0));
  ledOn(2, red, getValue(A0));
}
