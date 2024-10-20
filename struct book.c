#include<stdio.h>
#include<string.h>

struct Book{
       char title[30];
       char author[30];
       int publication_year;
       char ISBN[13];
       float price;
}book1, book2;

int main()
{
    /*
    strcpy(book1.title, "Introduction to C programing");

    strcpy(book1.author, "John Smith");

    book1.publication_year = 2022;

    strcpy(book1.ISBN, "9780131103627");

    book1.price = 49.99;
    */

    //prompt the user to enter

    printf("Enter the book title: ");
    scanf("%s", book1.title);

    printf("Enter the authors name: ");
    scanf("%s", book1.author);

    printf("Enter the year of publication: ");
    scanf("%d", &book1.publication_year);

    printf("Enter the ISBN: ");
    scanf("%s", book1.ISBN);

    printf("Enter the price of the book: ");
    scanf("%f", &book1.price);

    printf("The book title is: %s\n", book1.title);
    printf("The author is: %s\n", book1.author);
    printf("The publication year is: %d\n", book1.publication_year);
    printf("The ISBN is: %s\n", book1.ISBN);
    printf("The price is: %.2f\n", book1.price);

    return 0;
}
