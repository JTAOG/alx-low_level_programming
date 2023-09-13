#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @k: the value for computation
 * Return: (0) is a success
 */
int _abs(int k)
{
	if (k < 0)
	{
		int abs_val;

		abs_val = k * -1;
		return (abs_val);
	}
	return (k);
}
