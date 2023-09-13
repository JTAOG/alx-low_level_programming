#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number
 * @h:the value in view
 * Return:value of te last digit.
 */
int print_last_digit(int h)
{
	int last;

	last = h % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
