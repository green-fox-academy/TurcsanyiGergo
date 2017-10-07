#include <stdio.h>
#include <stdlib.h>

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

int main()
{
    int temperature = 23;
    if(temperature < 20){
        printf("Too cold for the AC.");
    }
    else if(temperature >= 21 <=24 ){
        printf("It is up to you to use the AC or not.");
    }
    else {
        printf("Hot enough to turn the AC on.");

    }
    return 0;
}


