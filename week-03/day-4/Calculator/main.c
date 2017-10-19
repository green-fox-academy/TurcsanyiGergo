#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

void welcome_scr();
void set_cursor_pos(int x, int y);
COORD coord = {0,0};

int main()
{
    char command[256];
    welcome_scr();
    set_cursor_pos(5, 5);
    //printf("Gergo");
    while (strcmp(command, "exit") != 0) {
           gets (command);
           if (strcmp(command, "clear") == 0) {
               system("cls");
           }
            if (strcmp(command, "help") == 0){
                welcome_scr();
            }
               }


    return 0;
}


void welcome_scr()
{
    printf("\tGreg's CLI Calculator\n\n\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n");
    printf("+\t summation\n");
    printf("-\t subtraction\n");
    printf("*\t multiplication\n");
    printf("/\t division\n");
    printf("\t division with remainder\n");
    printf("^\t squaring\n");
    printf("<\t square root\n");
    printf("log\t logarithm\n");
    printf("binto\t binary to hex or dec\n");
    printf("hexto\t hexadecimal to bin or hex\n");
    printf("decto\t decimal to bin or hex\n");
    printf("====================================\n\n");
    printf("exit\t exit from the program\n");
    printf("clear\t clear the screen\n");
    printf("help\t print usage\n");
    printf("====================================\n\n");
    printf("Press Enter to start!\n");
    printf("====================================\n\n");
    getchar();
    system("cls");
}


void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

