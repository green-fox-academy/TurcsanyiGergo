#include <stdio.h>
#include <stdlib.h>

/*
create a program which prints out the days from monday to sunday
use a loop and variables to do that
for example:
for(int i = 0; i < 6; i++){
    printf("%d\n", i);
}
you can match the numbers with the name of the days
write this program first with if and else-if statements
then do it again with switch-statement
take the conclusion:
    - which method was faster?
    - which was shorter?
    - which one did you find easier?
*/

int main()
{

    for (int i = 1; i <= 7; i++){

        if (i == 1)      {
                printf("%d Monday\n", i);
        }
        else if (i == 2) {
                printf("%d Tuesday\n", i);
        }
        else if (i == 3) {
                printf("%d Wednesday\n", i);
        }
        else if (i == 4) {
                printf("%d Thursday\n", i);
        }
        else if (i == 5) {
                printf("%d Friday\n", i);
        }
        else if (i == 6) {
                printf("%d Saturday\n", i);
        }
        else if (i == 7) {
                printf("%d Sunday\n\n\n", i);
        }
}
        for (int i = 1; i <= 7; i++){

        switch(i) {
            case 1 :
                printf("%d Monday\n", i);
                break;
            case 2 :
                printf("%d Tuesday\n", i);
                break;
            case 3 :
                printf("%d Wednesday\n", i);
                break;
            case 4 :
                printf("%d Thursday\n", i);
                break;
            case 5 :
                printf("%d Friday\n", i);
                break;
            case 6 :
                printf("%d Saturday\n", i);
                break;
            case 7 :
                printf("%d Sunday\n\n\n", i);
                break;
        }
        }
        printf("In my opinion to use switch is better.\n");

    return 0;
}
