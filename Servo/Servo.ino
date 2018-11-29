#include <Servo.h>
#include <DDservo.h>

// use your custom lib here
DDservo myServo(9);

void setup(){
  myServo.setType(360);
  // your additional setup code here
}

void loop(){
    myServo.goTo(100);
  // your main code here

}
