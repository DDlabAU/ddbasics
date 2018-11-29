#include "DDpot.h"
#include "general.h"

//Set the pin which the potentiometer is connected to
const int potPin = 4;
int value = 0;

void setup() {

}

void loop() {
  if (isLowest(potPin)) {
    //write what happens if the potentiometer is at it's lowest value. Likewise use isHighest to test for the highest value
    //getValue returns the current position of the potentiometer as a number between 0 and 100
    value = getValue(potPin);
  } else if (upperHalf(potPin)) {
    //write what happens if the potentiometer is placed somewhere at its lowest half of values. Likewise use lowerHlf to test for the lower half og values
    value = 100;
  }
}
