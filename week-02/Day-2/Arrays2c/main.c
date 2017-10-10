#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	//TODO:
    // Print out the two arrays character-by-character

	//TODO:
    // What is the difference between the arrays?
    for(int i = 0; i <= 3; i++) {
        printf("%c \n", char_array[i]);
    }
        printf("\nSize of this array is defined by character by character is %d.\n", sizeof(char_array));
        printf("\n");

    for(int g = 0; g <= 3; g++) {
        printf("%c \n", char_array_the_same[g]);
    }
    printf("\nSize of this array is defined by string is %d.\n", sizeof(char_array_the_same));

    return 0;
}
