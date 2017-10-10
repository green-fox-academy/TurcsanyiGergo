#include <stdio.h>

int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};

	//TODO:
    // Print out the content of the arrays
    for(int i = 0; i <=4; i++){
                printf("%d : %d\n", i, int_array[i]);

    }
    printf("\n");

    for(int g = 0; g <=4; g++){
                printf("%d : %.3f\n", g, float_array[g]);
    }
    return 0;
}
