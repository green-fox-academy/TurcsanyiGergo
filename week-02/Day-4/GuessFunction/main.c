#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user_message();
int generate_random_number();
void guess();

int main()
{
    user_message();
    generate_random_number();
    guess();

   return 0;
}

int generate_random_number()
{
    srand(time(NULL));
    int random_number = rand() % 101;
    return random_number;
}

void guess()
{

    int random_number = generate_random_number();

    int counter = 0;
    int user_number = 0;



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

}

    void user_message()
    {
      printf("Dear User! This is the Guess my number computer game. Try to find the number the computer generated!\n\n");
    }
