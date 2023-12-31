#include <stdio.h>
#include "lists.h"

/**
 * list_len - print it out
 * @h: 1
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
