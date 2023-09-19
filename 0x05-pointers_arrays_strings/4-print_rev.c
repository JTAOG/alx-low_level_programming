#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: prints a string and a line
 * Return: (0) is a success
 */
void print_rev(char *s)
{
	int longi = 0;
	int t;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (t = longi; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
