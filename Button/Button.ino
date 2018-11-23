#include "buttonCode.h"

const int buttonPin = 3;

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (ButtonIsDown(buttonPin)) {
    
  }
}
