#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t number = 254;
	uint8_t result;

	result = number + 23;

	printf("%d\n", result);
	// Check the result with printf

 	// What happened?! uint8_t = 0-255. After that it starts again.
	// Try again with different datatype
	uint16_t result_16 = number + 23;
	// Check the result with printf
printf("%d\n", result_16);
	// What happened and why? 255 + 23 = 277

	//----------------------------------------
	int8_t number_negative = number;
	// Check the result with printf
    printf("%d\n", number_negative);
	// What happened and why? -128 + 126 = -2
    return 0;
}

