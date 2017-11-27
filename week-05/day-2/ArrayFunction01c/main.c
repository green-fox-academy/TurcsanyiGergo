#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */
/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unsorted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */

#include <stdio.h>
#include <string.h>
int main ()
{
	char string[55] ="This is a string for testing";
	char *p;

	//TODO: write a program, which lists all position where character 'i' is found


	p = strchr (string, 'i');
	while (p != NULL) {
		printf ("Character i found at position %d\n", p - string + 1);
		p = strchr(p + 1, 'i');
	}
	return 0;
}
