#include <stdio.h>
#include <stdlib.h>

/*
write a program that decides which number is bigger
use switch-statement
*/

int main()
{
    int num1 = 85;
    int num2 = 96;

    switch(num1 > num2){
        case 1:
            printf("The %d is greater than %d.", num1, num2);
            break;
        default:
            printf("The %d is smaller than %d.", num1, num2);

    }

    return 0;
}
