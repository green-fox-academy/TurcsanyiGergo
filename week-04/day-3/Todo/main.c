#include <stdio.h>
#include <stdlib.h>

void welcome_scr();
int task_number = 0;

typedef struct {

char duty [20];
int prio;
int checked;

} todo_t;

void add_task(todo_t task_name, char *name);

int main()
{
char command[255];
todo_todos[100]
welcome_scr();

while (1) {
    gets(command);
    char *tok1 = strtok(command, " ");
    char *tok2 = strtok(NULL, " ");
    if(strcmp(tok1, "-a")){

    }
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

void add_task(todo_t task_name, char *name) {


}
