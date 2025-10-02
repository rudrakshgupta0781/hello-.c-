//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
    int main (){
   int num, OriginalNum, remainder, result = 0;
printf("Enter a integer :");
scanf("%d", &num);

OriginalNum = num;

     while (OriginalNum != 0) {
        remainder = OriginalNum % 10;
        result += remainder * remainder * remainder;
        OriginalNum /= 10;
     }

if (result == num){
        printf("%d is an Armstrong number\n", num);
}
    else{
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;




    }
    