#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */

int bubble (int *Gergo_array, uint8_t j);

int main()
{
  int Gergo_array[12], n, c;

  n = sizeof (Gergo_array) / sizeof (Gergo_array[0]);

    printf("The original array is:\n");
    srand(time(NULL));
  for (c = 0; c < n; c++) {
    Gergo_array[c] = rand() % 50;
    printf("%d|", Gergo_array[c]);
  }
    bubble (Gergo_array, n);

    return 0;
}

int bubble (int *Gergo_array, uint8_t length) {

    int d, i, swap, c;

for (c = 0 ; c < ( length - 1 ); c++)
  {

    for (d = 0 ; d < length - c - 1; d++)
    {
      if (Gergo_array[d] > Gergo_array[d+1])
      {
        swap = Gergo_array[d];
        Gergo_array[d] = Gergo_array[d+1];
        Gergo_array[d+1] = swap;
      }
    }
  }

    printf("\nSorted list in ascending order:\n");

  for ( c = 0 ; c < length ; c++ ) {
    printf("%d|", Gergo_array[c]);
  }
    printf("\n");

return 0;
}
