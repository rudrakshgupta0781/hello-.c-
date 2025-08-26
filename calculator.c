#include <stdio.h>

int main() {
    float num1, num2;
    
    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // sum 
    printf("Sum: %.2f\n", num1 + num2);

    //  difference
    printf("Difference: %.2f\n", num1 - num2);

    //  product
    printf("product: %.2f\n" , num1 * num2);

    //  quotient 

        printf("Quotient: %.2f\n", num1 / num2);
    
    
     return 0 ; 
}
