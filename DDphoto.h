int caliPhoto;

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
