#include "DDFSR.h"
#include "general.h"

//Set the pin which the force sensor is connected to
const int fsrPin = 4;
int value = 0;

void setup() {
  //Calibrate the sensor at the begining of the program to avoid inaccuracy
  //NB! This can only be done to one of your inputs
  calibrate(fsrPin);
}

void loop() {
  if (isTouched(fsrPin)) {
    //write what happens if the sensor is touched
    //getValue reads the force put upon the sensor as a number between 0 (no force) and 100 (max force)
    value = getValue(fsrPin);
  } else {
    //write what happens if the sensor is not touched
    value = 0;
  }
}
