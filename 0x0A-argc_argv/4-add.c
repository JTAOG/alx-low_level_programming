#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array
 *
 * Return: 0
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))/*count string*/

	{
		if (!isdigit(str[count])) /*check if str is a digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print name
 * @argc: count argument 1
 * @argv: argument 2
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argv) /*goes through array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*atoi convert string*/
			sum += str_to_int;
		}
		/*contain no digit*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
