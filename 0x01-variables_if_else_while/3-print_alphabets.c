#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: (0) is a success
 */
int main(void)
{
	char d;
	char b;

	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}
		for (b = 'A'; b <= 'Z'; b++)
		{
			putchar(b);
		}
	putchar('\n');
	return (0);
}
