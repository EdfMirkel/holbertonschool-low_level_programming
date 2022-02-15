#include <stdio.h>
#include "main.h"

/**
 *print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 *where n is the number of elements of the array to be printed
 *Numbers must be separated by comma, followed by a space
 *@a: integer
 *@n: integer
 *Return: Value of array @a
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
