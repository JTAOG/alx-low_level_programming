#include <stdio.h>

/**
 * main - the entry
 *
 * Return: (0) means success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
