#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name, followed by a new line
 * @argc: input 1
 * @argv: input 2
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
