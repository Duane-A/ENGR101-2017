import <stdio.h>
import <time.h>
import "ECS100"

int main(){
  int total;
  
  for(int i=0;i<5;i++){
    total += read_analog(0);
  }
  int mean = total/5;
}
