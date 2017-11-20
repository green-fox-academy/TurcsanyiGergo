#include <iostream>
using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a parameter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */
void get_fibonacci_number (int N)

int main() {


	return 0;
}

void get_fibonacci_number (int N)
{
    int result = 0;

    if (N < 0) {
        printf("Error, this table only works with positive numbers.\n");
    } else {
        printf("The first %d positive even number is:\n", N);

        for (int i = 0; i < N * 2; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    }
}
