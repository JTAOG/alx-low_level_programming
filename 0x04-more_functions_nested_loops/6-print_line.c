#include <stdio.h>
#include "main.h"

/**
 *  print_line - a function that draws a straight line in the terminal.
 *  @n: print line charaters
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int g;

		for (g = 1; g <= n; g++)
		{
			putchar('_');
		}
			putchar('\n');
	}
}
