#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to be tested
 *
 * Return: the int multiplied by -1 if negative else just the int
 */

int _abs(int n)
{
	int abs_num = n;

	if (n < 0)
	{
		abs_num *= -1;
		return (abs_num);
	}

	return (abs_num);
}
