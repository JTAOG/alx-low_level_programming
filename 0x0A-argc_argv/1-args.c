#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: no 1
 * @argv:no 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
