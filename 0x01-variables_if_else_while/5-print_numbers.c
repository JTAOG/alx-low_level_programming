#include <stdio.h>

/**
 * main - this is my entry point
 *
 * Return: (0) is a success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
