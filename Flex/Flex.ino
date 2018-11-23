#include "flexCode.h"

int flexPin = 2;
int value;

void setup() {
  calibrate(flexPin);
}

void loop() {
 if(isBend(flexPin)) {
  value = getValue(flexPin);
 } else {
    value = 0;
 }
}
