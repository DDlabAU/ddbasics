int getValue(int name) {
  int val = analogRead(name);
  int mapped = map(val, 0, 1023, 0, 100);
  return mapped;
}

boolean dark(int name) {
  int val = analogRead(name);
  if(val < 200) {
    return true;
  } else {
    return false;
  }
}

boolean bright(int name) {
  int val = analogRead(name);
  if(val > 850) {
    return true;
  } else {
    return false;
  }
}
