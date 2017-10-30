#include <stdio.h>
#include <stdlib.h>
void main()
{
    int Gergo_array[5];
    printf("The original order is:\n");

    for(int i = 0; i < 5; i++){
        Gergo_array[i] = rand() * 0.5;

        printf("%d | ", Gergo_array[i]);
    }
        printf("\n");

        printf("The reversed order is:\n");

    int temp = 0;
    int i = 0;
    int j = 0;

    for(i = 0, j = 4; i <= j; i++, j--){
        temp = Gergo_array[i];
        Gergo_array[i] = Gergo_array[j];
        Gergo_array[j] = temp;
    }

    for(i = 0; i < 5; i++){
        printf("%d | ", Gergo_array[i]);
    }
        printf("\n");
}
