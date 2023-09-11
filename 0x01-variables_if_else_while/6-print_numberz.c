#include <stdio.h>

/**
 * main - the entry to the code
 *
 * Return: (0) is success
 */
int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar('0' + j);
	}
	putchar('\n');
	return (0);
}
