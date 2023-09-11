#include <stdio.h>

/**
 * main - the entry
 *
 * Return:(0) is success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		if (a < 10)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
