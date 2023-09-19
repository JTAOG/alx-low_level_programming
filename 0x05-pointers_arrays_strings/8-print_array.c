#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the name of an array
 * @n: the value of the number of array to be printed
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
