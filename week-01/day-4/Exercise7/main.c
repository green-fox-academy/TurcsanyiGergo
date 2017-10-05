#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int num;
    num = 13;

    switch(num % 2) {
    case 0 : printf("This number is even.");
                    break;


    default: printf("This number is odd.");
    }

    return 0;
}
