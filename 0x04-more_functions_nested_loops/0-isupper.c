#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: this variable check an uppercase character
 * Return: (0) is success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
