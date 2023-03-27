#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to be summed
 *
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list vf;

	if (n == 0)
		return (0);

	va_start(vf, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vf, int);

	va_end(vf);
	return (sum);
}
