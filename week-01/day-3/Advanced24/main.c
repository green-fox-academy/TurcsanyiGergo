#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int num;
    num = 14;

	switch (num % 2 == 0) {
	case 1:
		printf("Even!");
		break;

	default:
	printf("The number is odd!!!!");
		break;
	}

    return 0;
}
