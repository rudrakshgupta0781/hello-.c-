//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
    int num, reversed = 0, remainder, original;
printf("Enter a number :");
scanf("%d",&num);
original = num ; 

 while (num != 0) {
        remainder = num % 10;              
        reversed = reversed * 10 + remainder; 
        num = num / 10;                
    }
    if (original==reversed){
        printf("The number is a palindrome ");
    }
    else {
        printf("The number is not a palindrom \n");
    }




return 0 ;

}