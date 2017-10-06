#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t x = 0b11001100;
    uint8_t y = 0b01010101;
	uint8_t z = x & y;
	uint8_t zz = x | y;



	// Be z equal to the bitwise and of x and y
    z = x & y;
	// Check the result with printf
    printf("Z is X & Y = %d\n" , z);
	// Be z equal to the bitwise or of x and y
    z = x | y;
	// Check the result with printf
		printf("Z is X OR Y = %d" , z);

    return 0;
}
