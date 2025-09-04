#include<stdio.h>
  int main(){ 
    int n ;
    int sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
     if (n<=0){
      printf("Invalid input");
      return 1;

     }
    for(int i=1 ; i<=n ; i++){
      sum+=i;

    }
printf("Sum of first %d natural numbers is %d\n",n,sum);

   
    return 0 ; 
  }