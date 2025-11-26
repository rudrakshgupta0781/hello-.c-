#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    FILE *fp = fopen("library.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Book b;
    int id, found = 0;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp)) {
        if (b.id == id) {
            found = 1;
            b.quantity++;
            printf("Book returned successfully!\nUpdated Quantity: %d\n", b.quantity);
        }
        fwrite(&b, sizeof(b), 1, temp);
    }

    if (!found) printf("Book not found.\n");

    fclose(fp);
    fclose(temp);
    remove("library.dat");
    rename("temp.dat", "library.dat");

    return 0;
}
