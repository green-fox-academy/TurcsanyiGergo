#include <stdio.h>
#include <stdlib.h>
#include "printer.h"
// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file
int sum(int num1, int num2, int num3, int num4);
void printer(int num1, int num2, int num3, int num4);

int main(){

    printer(a, b, c, d);
    printf("%d", sum(a, b, c, d));
    return 0;
}

void printer(int num1, int num2, int num3, int num4)
{
    printf("%d %d %d %d\n", num1, num2, num3, num4);
}

int sum(int num1, int num2, int num3, int num4)
{
    return num1 + num2 + num3 + num4;
}

