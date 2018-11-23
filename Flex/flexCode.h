boolean isBend(int name) {
  int val = analogRead(name);
  if(val > caliZero + 30 || val < caliZero - 30) {
    return true;
  } else {
    return false;
  }
}
