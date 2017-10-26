#include <stdio.h>
#include <stdlib.h>

void welcome_scr();
typedef struct {

char duty [20];
int prio;
int checked;

} todo_t;

int main()
{

welcome_scr();

while (1{
     gets("%s\t%[^\t\n");
}

    return 0;
}

void welcome_scr() {


    printf("Todo application\n"
"====================\n"
"Commands:\n"
 "-a   Adds a new task\n"
 "-wr  Write current todos to file\n"
 "-rd  Read todos from a file\n"
 "-l   Lists all the tasks\n"
 "-e   Empty the list\n"
 "-rm   Removes a task\n"
 "-c   Completes a task\n"
 "-p   Add priority to a task\n"
 "-lp  Lists all the tasks by priority");

}

