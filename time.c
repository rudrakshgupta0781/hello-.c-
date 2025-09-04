#include <stdio.h>
int main() {
  int hours , minutes , seconds;
  printf("Enter time in seconds:");
  scanf("%d", &seconds);
  hours = seconds / 3600;
  minutes = (seconds % 3600)/60 ; 
  seconds  = seconds % 60 ; 

  printf("time is %d:%d:%d", hours,minutes,seconds%60);
  









  return 0 ; 
}
  