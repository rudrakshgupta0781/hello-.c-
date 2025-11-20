#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open an existing file in read mode
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    printf("File content:\n");

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);  // Closing the file

    return 0;
}
