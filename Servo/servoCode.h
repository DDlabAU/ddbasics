Servo myservo;
int servoType;
// int servoType = 360;

int pos = 0;

void maxP(){
  myservo.write(servoType);
  pos = servoType;
}

void minP(){
  myservo.write(0);
  pos = 0;
}

void goTo(int i){
    myservo.write(i);
    pos = i;
}

void sweepTo(int goal, float t){
  int steps = abs(pos-goal);
  int timeSteps = t*1000/steps;
  if(pos<goal){
    for(int i=pos; i<=goal; i++){
      myservo.write(i);
      delay(timeSteps);
    }
  }else{
    for(int i=pos; i>=goal; i--){
      myservo.write(i);
      delay(10);
    }
  }
  pos = goal;
}

void pause(float t){
  int p = t * 1000;
  delay(p);
}
