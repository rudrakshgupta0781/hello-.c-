#include<stdio.h>
   int main(){
      int num1 , num2, num3 ;
      printf("Enter three number with spacing  :");
      scanf("%d %d %d",&num1, &num2 , &num3);
      if(num1>num2 && num1>num3){
         printf("%d is the largest number\n", num1);

      }
else if(num2>num1 && num2>num3){
   printf("%d is the largest number\n", num2);

}
   else if(num3>num1 && num3>num2){
      printf("%d is the largest number\n", num3);

   }

   else if (num1==num2 && num1==num3){
      printf("All numbers are equal\n");
   }
else 
printf("invalid input\n");

return 0 ; 
   }