#include "flexCode.h"

const int flexPin = 2;
int value;

void setup() {
  pinMode(flexPin,INPUT);
  calibrate(flexPin);
}

void loop() {
 if(isBend(flexPin)) {
  value = getValue(flexPin);
 } else {
    value = 0;
 }
}
