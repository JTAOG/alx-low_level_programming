#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int v = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; v < l ; v++)
	{
		dest[v] = src[v];
	}
	dest[l] = '\0';
	return (dest);
}
