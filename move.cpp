#include <stdio.h>
#include <time.h>
#include "ECS100"

int main(){
  init();
  
  int adc_reading;
  int threshold;
  
  if(adc_reading < threshold>{
    reverse(500);
  }
  return 0;
}

//Drives robot straight
void straight(duratiom){
  set_motor(1,255);
  set_motor(2,255);
  sleep1(0, duration);
}

//Turns robot left
void left(duration){
  set_motor(1,0);
  set_motor(2,255);
  sleep1(0, duration);
}

//Turns robot right
void right(){
  set_motor(1,255);
  set_motor(2,0);
  sleep1(0, duration);
}

//Reverses robot
void reverse(duration){
  set_motor(1,-127);
  set_motor(2,-127);
  sleep1(0, duration);
}

