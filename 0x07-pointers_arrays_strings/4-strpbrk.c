#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: to print code
 * @accept: the set to be searched for
 *
 * Return: (0) is a success
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
