#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: this varible prints a terminal
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int k, l;

		for (k = 0; k < n; k++)
		{
			for (l = 0; l < n; l++)
			{
				if (l == k)
				putchar('\\');
				else if (l < k)
				putchar(' ');
			}
			putchar('\n');
		}
	}
}
