#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int count, user_number = 0, random_number = rand() % 101;


    for (count = 0; count < 5; count++) {
        printf("Please enter your number: \n>");
        scanf("\n%d", &user_number);

        if(user_number == random_number) {
            printf("Yessss, you are the best!");
            break;
    }

        if(user_number > random_number)
            printf("Too big! You have %d lives left.\n\n", 4 - count);
        else
            printf("Too small. You have %d lives left.\n\n", 4 - count);

    }

    if(count == 5)
        printf("No luck at this time, please try again! \nThe number was: %d. \n", random_number);



    return 0;

}
