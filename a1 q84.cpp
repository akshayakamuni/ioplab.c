#include<stdio.h>

struct Book {
    int id;
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book book[10];
    int i, n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the details of the book %d:\n", i + 1);
        printf("\nEnter ID: ");
        scanf("%d", &book[i].id);
        printf("\nEnter Title: ");
        scanf("%s", book[i].title);
        printf("\nEnter Author: ");
        scanf("%s", book[i].author);
        printf("\nEnter Price: ");
        scanf("%f", &book[i].price);
    }

    for (i = 0; i < n; i++) {
        printf("Details of the book %d:\n", i + 1);
        printf("ID: %d\n", book[i].id);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Price: %.2f\n", book[i].price);
    }

    return 0;
}

