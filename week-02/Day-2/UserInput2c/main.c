#include <stdio.h>

int main() {
    char petname[5] = {0,0,0,0,'\0'};  // Buffer variable for user input
    char buffer[255];

                    // a,s,a,\n
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
//    gets(petname);

    for(int i = 0; i < 5; i++) {
      petname[i] =  getchar();

    }
   // petname[] = 0;

    printf("%s's pet's name is %s.", buffer, petname);

    return 0;
}
