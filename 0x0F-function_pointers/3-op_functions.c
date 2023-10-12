#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return it
 * @a: the first no
 * @b: 2
 *
 * Return: a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - print it
 * @a: 1
 * @b: 2
 *
 * Return: a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - print it
 * @a: 1
 * @b: 2
 *
 * Return: a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - print it
 * @a: 1
 * @b: 2
 *
 * Return: a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - print it
 * @a: 1
 * @b: 2
 *
 * Return: a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
