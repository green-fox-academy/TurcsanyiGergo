#include <stdio.h>
#include <stdlib.h>


void main()
{
    int Gergo_array[5];
    int Gergo_array2[7];

    printf("The original array is:\n");

    for (int i = 0; i < 5; i++){
        Gergo_array[i] = rand() / 10;
        printf("%d|", Gergo_array[i]);
    }
    printf("\n");

    printf("\nThe modified array is:\n");
    for(int i = 0; i <= 6; i++){
        Gergo_array2[i+1] = Gergo_array[i];
        Gergo_array2[0] = 42;
        Gergo_array2[6] = 42;
    }
     for(int i = 0; i < 7; i++){
        printf("%d|", Gergo_array2[i]);
    }
        printf("\n");
}
