#include <stdio.h>

/* ---------- Static Library Functions ---------- */

static int add(int a, int b) {
    return a + b;
}

static int subtract(int a, int b) {
    return a - b;
}

static int multiply(int a, int b) {
    return a * b;
}

static float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}

/* ---------- Main Program Using Functions ---------- */

int main() {
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSelect Operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nResult: %d\n", add(num1, num2));
            break;
        case 2:
            printf("\nResult: %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("\nResult: %d\n", multiply(num1, num2));
            break;
        case 4:
            printf("\nResult: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}
