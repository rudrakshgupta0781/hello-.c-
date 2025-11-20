#include <stdio.h>

// Function that accepts pointers and modifies values
void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;      // increase integer value
    *y = *y * 2;       // double the float value
    *z = 'A';          // change the character
}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'K';

    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    // Passing variables by reference
    modifyValues(&a, &b, &c);

    printf("After function call:\n");
    printf("a = %d\n", a);      // changed
    printf("b = %.2f\n", b);    // changed
    printf("c = %c\n", c);      // changed

    return 0;
}
