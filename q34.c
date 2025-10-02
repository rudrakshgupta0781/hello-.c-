//Write a program to print all factors of a given number
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Error: Factors of 0 are not defined.\n");
    } else {
        int num = (n < 0) ? -n : n;  

        printf("The factors of %d are: ", n);
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
