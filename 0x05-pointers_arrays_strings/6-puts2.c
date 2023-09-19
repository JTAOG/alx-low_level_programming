#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: input variable
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int c = 0;
	char *h = str;
	int j;

	while (*h != '\0')
	{
		h++;
		longi++;
	}
	c = longi - 1;
	for (j = 0 ; j <= c ; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
