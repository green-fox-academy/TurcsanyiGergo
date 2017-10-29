#include <stdio.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on the given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/
int counter = 0;
int number = 10;

void add();
void sub();
void multi();
void doubling();
void extra();

int main() {


    add();
    sub();
    multi();
    doubling();
    extra();

    printf("\nYou have done %d operations.\n", counter);

return 0;
}

void add() {
    counter++;
    int num1 = number + 1;
    printf("Number + 1 = %d.\n" , num1);
}

void sub() {
    counter++;
    int num1 = number - 1;
    printf("Number subtracted by 1 = %d.\n" , num1);
}

void multi() {
    counter++;
    int num1 = number * 10;
    printf("Multiplication by 10 = %d.\n" , num1);
}

void doubling() {
    counter++;
    int num1 = number / 0.5;
    printf("Double of the number = %d.\n" , num1);
}

void extra() {
    counter++;
    int num1 = (number * 3) + 10;
    printf("Multiply the number by 3 + 10 = %d.\n" , num1);
}

