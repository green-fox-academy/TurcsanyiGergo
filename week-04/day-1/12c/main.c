#include <stdio.h>

void print_array(int *array, int size);

int main()
{
	int a[] = {6, 8, 48, 1, -9, 89};
    int size = 0;
    size = sizeof(a) / sizeof(int);
	//TODO: write a function, which prints out the passed array's elements.
    print_array(a, size);
	return 0;
}

void print_array(int *array, int size) {

    printf("Elements are:\n");

   for(int i = 0; i < size; i++)
{
   printf("%d\n", array[i]);
}

}
