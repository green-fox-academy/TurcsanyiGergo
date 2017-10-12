#include <stdio.h>
#include <stdlib.h>

int main() {

    srand(time(NULL));
    int count , user_number = 0, random_number = rand() % 100;


    for (count = 0; count < 5; count++) {
        printf("Please enter your number: \n>");
        scanf("\n%d", &user_number);

        if(user_number == random_number) {
            printf("Yessss, you are the best!");
            break;
    }

        if(user_number > random_number)
            printf("Too big!\n\n");
        else
            printf("Too small.\n\n");

    }

    if(count == 5)
        printf("No luck at this time, please try again!\n");


    return 0;

}
