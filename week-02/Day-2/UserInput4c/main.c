#include <stdio.h>
#include <string.h>

int num = 0;
char name[25] = {0};
void asknumber();

int main()
{

    //write a void function which asks for a number with scanf and print it out with printf, then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem

    asknumber();

    return 0;
}

    void asknumber() {
    printf("What is your number?\n");
    scanf("%d", &num);
    printf("Your number is %d", num);
    printf("\nGive me your name:\n");
    fflush(stdin);
    gets(name);
    puts(name);
    printf("End of program.");


}
