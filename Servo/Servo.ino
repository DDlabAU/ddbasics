#include <Servo.h>
#include <DDservo.h>

// use your custom lib here
DDservo myServo(9);

void setup(){
  myServo.setType(180);
  myServo.activate();
  // your additional setup code here
}

void loop(){
    myServo.goTo(100);
    delay(1000);
    myServo.goTo(0);
    delay(1000);
    // your main code here
}
