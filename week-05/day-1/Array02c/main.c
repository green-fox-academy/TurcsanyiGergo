#include <stdio.h>
#include <stdlib.h>

void main()
{
  int Gergo_array[12], n, c, d, swap;

  n = sizeof (Gergo_array) / sizeof (Gergo_array[0]);

    printf("The original array is:\n");

  for (c = 0; c < n; c++) {
    Gergo_array[c] = rand() / 5;
    printf("%d|", Gergo_array[c]);
  }

  for (c = 0 ; c < ( n - 1 ); c++)
  {

    for (d = 0 ; d < n - c - 1; d++)
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

  for ( c = 0 ; c < n ; c++ ) {
    printf("%d|", Gergo_array[c]);
  }
    printf("\n");
}
