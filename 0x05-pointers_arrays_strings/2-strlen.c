#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: to return the lenght of a string
 * Return: The strings lenght
 */
int _strlen(char *s)
{
	int i;

	int count = 0;
	for (i = 0; s[i] != '\n'; i++)
		count++;
	return (count);
}
