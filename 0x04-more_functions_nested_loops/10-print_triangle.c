#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: to print th triangle
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				putchar(' ');
			}
			for (index = 0; index < hash; index++)
			{
				putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');

}
