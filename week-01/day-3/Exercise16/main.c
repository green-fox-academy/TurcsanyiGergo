#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t v = 436;
	// print 'Yeah!' if dividable by 4 but print 'End of program' after regardless
        if(v % 4 == 0){
        printf("Yeah!\n", v);
    }

            printf("End of program.", v);

	return 0;
}
