#include <stdio.h>

int main() {
    char buffer[255];
    char petname[15];  // Buffer variable for user input

    //TODO:
    // Get the user's name with gets

    //TODO:
    // Print it out with puts

    //TODO:
    // Get the user's pet name with getch

    //TODO:
    // Print it out
    puts("What is your name?\n");
    gets(buffer);

    puts("What is your pet's name?\n");
    gets(petname);

    printf("%s's pet's name is %s.", buffer, petname);



    return 0;
}
