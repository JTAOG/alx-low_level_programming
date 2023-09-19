#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: to return the lenght of a string
 * Return: The strings lenght
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
