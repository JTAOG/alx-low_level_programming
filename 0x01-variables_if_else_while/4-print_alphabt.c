#include <stdio.h>

/**
 * main - this is my entry point
 *
 * Return:(0) is a success
 */
int main(void)

{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t != 'e' && t != 'q')
			putchar(t);
	}
	putchar('\n');
	return (0);
}
