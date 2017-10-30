#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Gergo_array[5];

    for (int i = 0; i < 5; i++) {
    Gergo_array[i] = rand() * 0.5;
        printf("%d | ", Gergo_array[i]);
    }

    for (int j = 4; j >= 0; j--) {
        printf("%d | ", Gergo_array[j]);
   }

    return 0;
}
