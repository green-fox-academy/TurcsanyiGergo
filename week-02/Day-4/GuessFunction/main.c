#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guess();

int main() {

   guess();


   return 0;
   }


int guess(){

    srand(time(NULL));
    int counter = 0;
    int user_number = 0;
    int random_number = rand() % 101;


    for (counter = 0; counter < 5; counter++) {
        printf("Please enter your number: \n>");
        scanf("\n%d", &user_number);

        if(user_number == random_number) {
            printf("Yessss, you are the best!");
            break;
    }

        else if(user_number > random_number){
            printf("Too big! You have %d lives left.\n\n", 4 - counter);
        }
        else  {
            printf("Too small. You have %d lives left.\n\n", 4 - counter);
    }
    }
    if(counter == 5){
         printf("No luck at this time, please try again! \nThe number was: %d. \n", random_number);
    }
return 0;

}
