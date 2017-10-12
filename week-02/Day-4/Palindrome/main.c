#include <stdio.h>
#include <string.h>

void palindrome(char word[]);

char word[25];
char end;

int main()
{



    printf("Enter a word and you get it back backwards: ");

    scanf("%s", &word);
    end = strlen(word) - 1;
    palindrome (word);



return 0;
}

    void palindrome(char word[]) {
    printf("The word backward is : ");
    for (int x = end; x >= 0; x--) {
    printf("%c", word[x]);
}
}
