#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: (0) is a success.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 || a != 4)
		{
			putchar(a + '0');
		}
			putchar('\n');
	}

}
