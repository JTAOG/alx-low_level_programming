#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * main - it is well
 * @argc: 1
 * @argv: 2
 * @_atoi: 3
 * Return: 0
 */
int main(int argc, int _atoi, char *argv[])
{
	int n1 = 0;
	int n2 = 0;

	if (argc == 3)
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
