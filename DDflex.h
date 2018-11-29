int caliBend;

boolean isBend(int name) {
  int val = analogRead(name);
  if(val > caliBend + 30 || val < caliBend - 30) {
    return true;
  } else {
    return false;
  }
}
