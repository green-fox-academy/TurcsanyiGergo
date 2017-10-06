#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t number = 254;
	// if number can't be represented with 8bits
	// print 'longer than 8bits' otherwise print 'ok'
        if (number < 256){
        printf("%d is OK, because it is smaller than 256!", number);
	}
	return 0;
}
