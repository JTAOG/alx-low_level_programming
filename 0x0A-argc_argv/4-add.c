#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print name
 * @argc: count argument 1
 * @argv: argument 2
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[1];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
				for (sum += atoi(e); e++;)
			}
			printf("%d\n", sum);
		}
		else
		{
			printf("0\n");
		}
		return (0);
	}

}
