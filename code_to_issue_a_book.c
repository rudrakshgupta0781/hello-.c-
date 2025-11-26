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

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp)) {
        if (b.id == id) {
            found = 1;
            if (b.quantity > 0) {
                b.quantity--;
                printf("Book issued successfully!\nRemaining Quantity: %d\n", b.quantity);
            } else {
                printf("Book is not available.\n");
            }
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
