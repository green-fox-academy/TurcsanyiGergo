#include <stdio.h>
#include <stdlib.h>

/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/

int main() {
int a;
a = 0;

    while (a <= 100) {
       // printf("%d\n", a);
        a++;

        if(a % 2 == 0)
            printf("Even\n");

        else printf("Odd\n");

    }



    return 0;
}

