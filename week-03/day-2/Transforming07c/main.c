#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int i_array[10] = {260, 259, 258, 257, 256, 255, 254, 253, 252, 251};
    unsigned char uc_array[10];

	//TODO: write a program, which copies the values from the given array to an unsigned char array
    //print out the elements of the unsigned char array, with the "%d" format specifier
    //what do you see?
	for (int i = 0; i <=  9; ++i) {
	uc_array[i] = i_array[i];
	printf("%d\n", uc_array[i]);
	}
    printf("\nWhat I can see is overflow, because the unsigned char is between only 0 and 255. \nUint16_t would solve the problem.\n");

    return 0;
}
