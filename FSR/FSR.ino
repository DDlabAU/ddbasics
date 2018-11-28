#include "FSRCode.h"

const int fsrPin = 4;
int value = 0;

void setup() {
  calibrate(fsrPin);
}

void loop() {
  if (isTouched(fsrPin)) {
    value = getValue(fsrPin);
  } else {
    value = 0;
  }
}