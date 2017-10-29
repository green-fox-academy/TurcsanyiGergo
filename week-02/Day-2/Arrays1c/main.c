#include <stdio.h>

int main() {
    char my_name_array[] = "My Name is Gergo";

    for(int i = 0; i < sizeof (my_name_array); i++) {
        printf("%c \n", my_name_array[i]);
    }
	//TODO:
    // Print out the array character-by-character
    return 0;
}
