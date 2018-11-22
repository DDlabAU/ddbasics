int getValue(int name) {
  int val = analogRead(name);
  int mapped = map(val, 0,1023,0,100);
  return mapped;
}

boolean isTouched(int name) {
  int val = analogRead(name);
  if(val > 10) {
    return true;
  } else {
    return false;
  }
}
