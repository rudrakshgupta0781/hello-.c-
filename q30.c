//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n , reversed=0,orignal;
    printf("Enter a number :");
    scanf("%d",&n);
    orignal=n;
    while(n!=0){
        reversed =reversed*10 + n%10;
        n/=10;
    }
    printf("The reverse of %d is %d\n",orignal,reversed);
    
        return 0 ;
    }