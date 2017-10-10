#include <stdio.h>
#include "ASCII.h"


int main()
{
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one character and prints out the character in character format then in ASCII too
    //printf("Type in one character then press enter: ");
    char_to_ascii();

    return 0;
}

void char_to_ascii(gt){
        printf("Please give a character and press enter:\n");
        scanf("%c" , &gt);
        printf("The ASCII code of your character:\n%d\n" , gt);
    }
