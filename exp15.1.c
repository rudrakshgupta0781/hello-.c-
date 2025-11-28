#include <stdio.h>

/* --------- Functions that will be part of shared library --------- */

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if(b == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
    return (float)a / b;
}

/* --------- Program using the "shared library" functions --------- */

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose Operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nResult: %d\n", add(a, b));
            break;
        case 2:
            printf("\nResult: %d\n", subtract(a, b));
            break;
        case 3:
            printf("\nResult:
