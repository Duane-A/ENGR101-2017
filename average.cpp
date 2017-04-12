import <stdio.h>
import <time.h>
import "ECS100"

int main(){
  init();
  
  int total;
  int mean;
  
  for(int i=0;i<5;i++){
    total += read_analog(0);
  }
  mean = total/5;
}
