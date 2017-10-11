#include <stdio.h>
#include <stdlib.h>

// create a function called `factorio`
// that returns it's input's factorial with and without recursion
// again the parameters value should be stored in a .h file
//
int factorio();

int main()
{

int fact = 0;
    printf("Please give me a number for the calciulation:\n");
    scanf("%d", &fact);

    printf("The result is: %d.", factorio(fact));
    return 0;
}



int factorio(fact){
    if(fact == 0) {
        return 1;
    }
    int result = fact;
    for(int i = 1 ; i < fact; i++){
        //for(int g = fact - 1; g >= 1; g--){
        result = result * i;
    }


    return result;
}


