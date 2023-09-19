#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the name of an array
 * @n: the value of the number of array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		_putchar('\n');
}
