#include<stdio.h>
   int main(){
      float principal , rate , time , intrest ;
      printf("Enter principal\n");
      scanf("%f",&principal);


      printf("enter rate\n");
      scanf("%f",&rate);

      printf("enter time in years \n");
      scanf("%f",&time);
      
      // simple intrest 
      printf("simple intrest is %f\n",(principal*rate*time)/100);

   

   





return 0 ; 
   }