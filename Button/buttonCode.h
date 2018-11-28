boolean buttonIsDown(int name) {
  int buttonState = digitalRead(name);
  if (buttonState == HIGH) {
    return true;
  } else {
    return false;
  } 
}

boolean buttonIsUp(int name) {
  int buttonState = digitalRead(name);
  if (buttonState == HIGH) {
    return false;
  } else {
    return true;
  } 
}
