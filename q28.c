//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n , product=1,i;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            product*=i;
            printf("The product of even numbers from 1 to %d is %d\n",i,product);
        }
    }
    return 0;
}