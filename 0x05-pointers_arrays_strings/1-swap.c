#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: interger 1
 * @b: interger 2
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
