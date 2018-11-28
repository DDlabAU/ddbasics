int buttonPin;

boolean ButtonIsDown(int name) {
  int buttonState = digitalRead(name);
  if (buttonState == HIGH) {
    return true;
  } else {
    return false;
  } 
}

boolean isButtonUp(int name) {
  int buttonState = digitalRead(name);
  if (buttonState == HIGH) {
    return false;
  } else {
    return true;
  } 
}
