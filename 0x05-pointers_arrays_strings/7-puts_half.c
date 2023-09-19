#include "main.h"

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 * @str: strings of numbers
 * Return: lenght of numbers
 */
void puts_half(char *str)
{
	int h = 0;
	int k;

	while (str[h] != '\0')
	{
		h++;
	}
	if (h % 2 == 1)
	{
		k = (h - 1) / 2;
		k += 1;
	}
	else
	{
		k = h / 2;
	}

	for (; k < h; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
