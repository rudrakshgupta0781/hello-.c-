#include <stdio.h>
int main() {
  float percentage ;
  printf("Enter your percentage :");
  scanf("%f",&percentage);
  if (percentage < 0 || percentage > 100){
    printf("Invalid percentage\n");

  }
else if (percentage >=90){
  printf("A\n");

}
else if (percentage >=80){
  printf("B\n");
}
else if (percentage >=70){
  printf("C\n");
}
else if (percentage >=60){
  printf("D\n");
}
else if (percentage < 60 ){
  printf("F\n");
}



  return 0 ; 
}
  