#include "photoSensorCode.h"

const int lightPin = 5;
int value = 0;

void setup() {

}

void loop() {
  if(bright(lightPin)) {
    value = getValue(lightPin);
   } else if (dark(lightPin)) {
    value = -1*getValue(lightPin);
   } else {
    value = 0;
   }
}
