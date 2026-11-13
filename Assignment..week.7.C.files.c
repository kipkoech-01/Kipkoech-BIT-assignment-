#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];
    char choice;

    // Open in append mode "a" - does NOT delete existing records
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        // fgets to allow spaces in title
        getchar(); // clear newline from buffer
        fgets(title, sizeof(title), stdin);

        fprintf(fp, "%s", title);
        printf("Book title successfully stored in borrowed_books.txt\n");

        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("File closed.\n");
    return 0;
}