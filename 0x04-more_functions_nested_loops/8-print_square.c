#include <stdio.h>
#include "main.h"

/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size: this prints a square followed by a new line
 */
void print_square(int size)
{
	int c, v;

	v = 0;

	if (size < 1)
		putchar('\n');

	while (v < size)
	{
		c = 0;
		while (c < size)
		{
			putchar('#');
			c++;
		}
		putchar('\n');
		v++;
	}
}
