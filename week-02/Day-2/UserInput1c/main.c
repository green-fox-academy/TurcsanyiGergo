#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    //TODO:
    // Get the user's name with scanf

    //TODO:
    // Print it out with printf
    printf("What is your name?\n\n");
    scanf("%s", buffer);

    printf("\nHello %s, Welcome to the GreenFox!\n\n", buffer);


    return 0;
}
