#include <stdio.h>
#include <stdlib.h>

/*
write a program to check whether a given number is positive or negative
*/

int main()
{
    int a = 212;

    if (a > 0)
    printf("%d is a positive number.\n", a);

    else if (a == 0)
        printf("%d is neither a positive or negative number.");

    else
        printf("%d is a negative number.\n", a);



    return 0;
}
