#include <stdio.h>

/* ---- Arithmetic Library Functions ---- */

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
        printf("Error! Division by zero.\n");
        return 0;
    }
    return (float)a / b;
}

/* ---- Main Program Using Library ---- */

int main() {
    int a, b;
    int choice;

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
            printf("\nResult: %d\n", multiply(a, b));
            break;
        case 4:
            printf("\nResult: %.2f\n", divide(a, b));
            break;
        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}
