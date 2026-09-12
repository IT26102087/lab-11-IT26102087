#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[50];
    int pages;
} book_t;

void printBook(book_t b) {   // struct passed as INPUT parameter (by value)
    printf("Book Title: %s, Author: %s, Pages: %d\n", b.title, b.author, b.pages);
}

int main() {
    book_t myBook;

    printf("Enter title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);
    myBook.title[strcspn(myBook.title, "\n")] = 0;

    printf("Enter author: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);
    myBook.author[strcspn(myBook.author, "\n")] = 0;

    printf("Enter pages: ");
    scanf("%d", &myBook.pages);

    printBook(myBook);
    return 0;
}
