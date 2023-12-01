#include <stdio.h>
#include <string.h>

struct Book {
    char bookname[20];
    char author[20];
    unsigned short no_of_pages;
    float cost;
};

void display(struct Book*);

int main() {
    struct Book zulu = {
        bookname : "Zulu",
        author : "mind0bender",
        no_of_pages : 317,
        cost : 99
    };

    display(&zulu);

    return 0;
}

void display(struct Book* book) {
    printf("Name\t\t: %s\n", book->bookname);
    printf("Author\t\t: %s\n", book->author);
    printf("No. of pages\t: %u\n", book->no_of_pages);
    printf("Cost\t\t: $%0.2f\n", book->cost);
}