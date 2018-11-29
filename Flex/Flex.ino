#include "DDflex.h"
#include "general.h"

//Set the pin which is connected to the flex sensor
const int flexPin = 2;
int value;

void setup() {
  //calibrate the sensor to avoid inaccuracy
  //NB! This can only be done to one of your inputs
  calibrate(flexPin);
}

void loop() {
 if(isBend(flexPin)) {
  //write what happens if the sensor is bent
  //getValue reads the amout the sensor is bent (as a number between 0 (not bent) and 100 (fully bent))
  value = getValue(flexPin);
 } else {
    //write what happens if the sensor is not bent
    value = 0;
 }
}
