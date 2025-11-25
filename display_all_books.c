#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    FILE *fp = fopen("library.dat", "rb");
    struct Book b;

    if (fp == NULL) {
        printf("No books found.\n");
        return 0;
    }

    while (fread(&b, sizeof(b), 1, fp)) {
        printf("-----------------------------------------\n");
        printf("Book ID: %d\n", b.id);
        printf("Title: %s\n", b.title);
        printf("Author: %s\n", b.author);
        printf("Quantity: %d\n", b.quantity);
        printf("Status: %s\n", b.quantity > 0 ? "Available" : "Not Available");
        printf("-----------------------------------------\n");
    }

    fclose(fp);
    return 0;
}
