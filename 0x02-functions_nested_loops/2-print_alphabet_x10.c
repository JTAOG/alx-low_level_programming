#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char th;
	int r;

	r = 0;

	while (r < 10)
	{
		th = 'a';
		while (th <= 'z')
		{
			_putchar(th);
			th++;
		}
		_putchar('\n');
		r++;
	}


}
