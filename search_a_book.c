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
    int id, found = 0;

    if (fp == NULL) {
        printf("No books found.\n");
        return 0;
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp)) {
        if (b.id == id) {
            printf("\nBook Found!\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nStatus: %s\n",
                    b.id, b.title, b.author, b.quantity,
                    b.quantity > 0 ? "Available" : "Not Available");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found.\n");

    fclose(fp);
    return 0;
}
