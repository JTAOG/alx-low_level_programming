#include <stdio.h>
#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: (0) is a success
 */
void more_numbers(void)
{
int k, l;

for (k = 0; k < 10; k++)
{
	for (l = 0; l < 15; l++)
	{
		if (l >= 10)
		putchar(l / 10 + '0');
		putchar(l % 10 + '0');
	}
		putchar('\n');
}
}
