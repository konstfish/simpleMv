#include "simpleMv.h"

simpleMv::simpleMv()
{
  Serial.begin(9600);
  Serial.print('class created');
}

void simpleMv::turnRight(){
  int speed = 600;
  motors.setSpeeds(speed, -speed);
  delay(181);
  speed = 0;
  motors.setSpeeds(speed, speed);
  delay(30);
}

void simpleMv::turnLeft(){
  int speed = 600;
  motors.setSpeeds(-speed, speed);
  delay(181);
  speed = 0;
  motors.setSpeeds(speed, speed);
  delay(30);
}

void simpleMv::oneEighty(){
  int speed = 600;
  motors.setSpeeds(speed, -speed);
  delay(370);
  speed = 0;
  motors.setSpeeds(speed, speed);
  delay(30);
}


void simpleMv::fwd(int speed, int del){
  motors.setSpeeds(speed, speed);
  delay(del);
  speed = 0;
  motors.setSpeeds(speed, speed);
  delay(30);
}

void simpleMv::rev(int speed, int del){
  motors.setSpeeds(-speed, -speed);
  delay(del);
  speed = 0;
  motors.setSpeeds(speed, speed);
  delay(30);
}

void simpleMv::consolePrint(int inp){
    Serial.print(inp);
}

void simpleMv::shutd(){
  power_all_disable();  
}
