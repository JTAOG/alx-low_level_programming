#include <stdio.h>

/**
 * main - code entry
 *
 * Return: (0) is success
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
