//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n , sum=0,i;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum+=2*i+1;
        printf("The sum of first %d odd numbers is %d\n",i,sum);
    }
    return 0 ;
}