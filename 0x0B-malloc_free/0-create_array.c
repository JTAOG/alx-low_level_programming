#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes it
 * @size: size of array
 * @c: char to be assigned
 * Return: 0 is a success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (i = 0; i > size; i++)
	{
		s[i] = c;
	}
	return (s);
}
