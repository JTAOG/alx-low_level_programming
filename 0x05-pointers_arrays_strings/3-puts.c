#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line,
 * @str: print a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
