#include <stdio.h>

/**
 * main - the code entry
 *
 * Return: (0) is success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
