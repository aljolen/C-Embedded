#include <stdio.h>

typedef struct {
    char title[100];
    float price;
    int pageCount;
    char language[50];
    float weight;
    int yearOfPublication;
} Book;


void printBookInfo(Book book) {
    printf("Book Title: %s\n", book.title);
    printf("Price: %.2f\n", book.price);
    printf("Number of Pages: %d\n", book.pageCount);
    printf("Language: %s\n", book.language);
    printf("Weight: %.2f g\n", book.weight);
    printf("Year of Publication: %d\n\n", book.yearOfPublication);
}

int main() {

    Book harryPotterSeries[] = {
            {"Harry Potter and the Philosopher's Stone", 19.99, 223, "Ukrainian", 250, 1997},
            {"Harry Potter and the Chamber of Secrets", 19.99, 251, "Ukrainian", 270, 1998},
            {"Harry Potter and the Prisoner of Azkaban", 19.99, 317, "Ukrainian", 300, 1999},
            {"Harry Potter and the Goblet of Fire", 19.99, 636, "Ukrainian", 360, 2000},
            {"Harry Potter and the Order of the Phoenix", 19.99, 766, "Ukrainian", 440, 2003},
            {"Harry Potter and the Half-Blood Prince", 19.99, 607, "Ukrainian", 420, 2005},
            {"Harry Potter and the Deathly Hallows", 19.99, 607, "Ukrainian", 430, 2007}
    };


    int numberOfBooks = sizeof(harryPotterSeries) / sizeof(harryPotterSeries[0]);

    for (int i = 0; i < numberOfBooks; i++) {
        printBookInfo(harryPotterSeries[i]);
    }

    return 0;
}

