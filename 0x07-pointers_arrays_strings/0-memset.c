#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a memory area
 * @b: variable to copy char
 * @n: number of times to copy b.
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		s[f] = b;
	}
	return (s);
}
