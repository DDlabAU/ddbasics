Servo myservo;
int servoType;
// int servoType = 360;

int pos = 0;

int mappingF(int input){
  int mappedValue = map(input, 0, 100, 0, servoType);
  return mappedValue;
}

void maxP(){
  myservo.write(servoType);
  pos = servoType;
}

void minP(){
  myservo.write(0);
  pos = 0;
}

void goTo(int i){
    myservo.write(mappingF(i));
    pos = i;
}

void sweepTo(int goal, float t){
  int mGoal = mappingF(goal);
  int steps = abs(pos-mGoal);
  int timeSteps = t*1000/steps;
  if(pos<goal){
    for(int i=pos; i<=mGoal; i++){
      myservo.write(i);
      delay(timeSteps);
    }
  }else{
    for(int i=pos; i>=mGoal; i--){
      myservo.write(i);
      delay(10);
    }
  }
  pos = mGoal;
}

void pause(float t){
  int p = t * 1000;
  delay(p);
}
