#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changing or setting the Title
 *    * Changing or setting the Author
 *    * Changing or setting the Year of publication
 *    * Getting each of these separately by a single function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */

#include <stdio.h>
#include <stdlib.h>

int book_counter = 0;

typedef struct {
    char title[30];
    char author[30];
    int year_of_publication;

} books;

void change_title(books *book, int index, char *new_title);
void change_author(books *book, int index, char *new_author);
void change_year_of_pub(books *book, int index, int new_pub);


int main()
{
    books b1 = {"Stuff", "Gibsz Jakab", 1999};
    books b2 = {"other stuff", "John Doe", 2002};
    books b3 = {"get things done", "Poe", 1919};
    books b4 = {"this is fun", "You did this", 1979};

    books book[] = {b1, b2, b3, b4};

    int len = sizeof(book)/sizeof(book[0]);

    printf("The original title of this book was: %s.\n", book[1].title);
    change_title(book, 1, "My story at GreenFox.");
    printf("The new title of this book is: %s.\n", book[1].title);

    printf("\nThe original author of this book was: %s.\n", book[0].author);
    change_author(book, 0, "Gergo Coelho");
    printf("The new author of this book is: %s.\n", book[0].author);

    printf("\nThe original year this book was: %d.\n", book[2].year_of_publication);
    change_year_of_pub(book, 2, 1945);
    printf("The new year of this book is: %d.\n", book[2].year_of_publication);

    return 0;
}

void change_title(books *book, int index, char *new_title)
{
    strcpy(book[index].title, new_title);
}

void change_author(books *book, int index, char *new_author)
{
    strcpy(book[index].author, new_author);
}

void change_year_of_pub(books *book, int index, int new_year)
{
    book[index].year_of_publication = new_year;
}
