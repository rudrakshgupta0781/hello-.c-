#include<stdio.h>
int main(){
    int n , i ;
   int  numerator=2 , denominator=3; 
float sum = 0 ;
printf("Enter number of terms :");
scanf("%d",&n);
for (i=1 ; i<n ; i++){
     sum+= (float)numerator/(float )denominator ;
    numerator +=2;
    denominator +=3;


}
printf("Sum of series is : %f",sum);
return 0 ; 
}




