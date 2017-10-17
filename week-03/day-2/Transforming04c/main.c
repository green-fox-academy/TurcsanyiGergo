#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float val;
	char str[5];
	strcpy(str, "3.14");

	//TODO: print out the value of pi, first as a string, then a float value.
    val = atof (str);

    printf("The float value is: %.2f.\n", val);
    printf("The string value is: %s.\n", str);

	return(0);
}
