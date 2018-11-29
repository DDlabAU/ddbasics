boolean isTouched(int name) {
  int val = analogRead(name);
  if(val > 10) {
    return true;
  } else {
    return false;
  }
}
