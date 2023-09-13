#include "main.h"

/**
 * _isalpha - this is my entry point
 *
 * @c: a function to check alphabetic character
 * Return: 1 else return (0)
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
