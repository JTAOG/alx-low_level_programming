#include "main.h"

/**
 * print_numbers -  a function that prints the numbers
 *
 * Return: (0) is a success
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
		_putchar('\n');
}
