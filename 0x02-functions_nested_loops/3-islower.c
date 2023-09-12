#include "main.h"

/**
 * _islower - checking for lowercase in char
 * @c: check for this char
 * Return: 1 if char lowercase else 0.
 */

int _islower(int t)
{
	if (t >= 'a' && t <= 'z')
		return (1);
	else
		return (0);

}
