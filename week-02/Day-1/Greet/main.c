#include <stdio.h>
#include <stdlib.h>
#include "greenfox.h"
// define a variable and assign the value `Greenfox` to it in a .h file
// create a function called `greet` that greets it's input parameter
// define more names to greet, call the function multiple times
void greet(char* name);

int main()
{
    greet("Gergo");
    greet("Zoli");
    greet("Balazs");

    return 0;
}

void greet(char* name){
    printf("%s, Welcome to the %s! How are you today?\n\n", name, str);

    return;

}
