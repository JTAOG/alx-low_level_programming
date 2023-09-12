#include "main.h"

/**
 * print_alphabet - this is my entry
 *
 * Return: (0) is a success
 */
void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		_putchar(word);

	_putchar('\n');
}
