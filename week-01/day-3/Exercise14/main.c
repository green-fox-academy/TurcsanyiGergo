#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t number = 254;
	uint8_t result;

	result = number + 23;


	// Check the result with printf
    printf("uint8_t numbers are located between 0 and 255. After that the counting starts again and the result  = %d\n", result);
 	// What happened?!
	// Try again with different datatype
	uint16_t result_16 = number + 23;
	// Check the result with printf
printf("uint16_t number are located between 0 and 65535. This value is = %d\n", result_16);
	// What happened and why? 255 + 23 = 277

	//----------------------------------------
	int8_t number_negative = number;
	// Check the result with printf
    printf("int8_t number are located between -128 and 127. After that the counting starts again and the result = %d\n", number_negative);
	// What happened and why? -128 + 126 = -2
    return 0;
}
