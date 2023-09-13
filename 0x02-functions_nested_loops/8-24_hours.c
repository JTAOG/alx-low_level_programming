#include "main.h"

/**
 * jack_bauer - function that prints the day
 *
 * Return: (0) is a success
 */
void jack_bauer(void)
{
	int h, j, k, l;

	for (h = 0; h <= 2; h++)
	{
	for (j = 0; j <= 9; j++)
	{
	if ((h <= 1 && j <= 9) || (h <= 2 && j <= 3))
	{
	for (k = 0; k <= 5; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	_putchar(h + '0');
	_putchar(j + '0');
	_putchar(58);
	_putchar(k + '0');
	_putchar(l + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
