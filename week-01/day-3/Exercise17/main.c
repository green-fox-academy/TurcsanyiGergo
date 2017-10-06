#include <stdio.h>

int main() {
	int w = 24;
	int out = 0;
	// if w is even increment "out" by one

	if (w % 2 == 0){
        printf("%d is even.\n", w);
        out++;
	}
	printf("Out is : %d.", out);
	return 0;
}
