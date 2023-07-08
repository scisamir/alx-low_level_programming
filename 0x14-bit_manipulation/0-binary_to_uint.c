#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, or if
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bnry = 0, pwr = 1, len = 0;

	if (!(b))
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		len--;

		if (b[len] != '0' && b[len] != '1')
			return (0);

		bnry += pwr * (b[len] - '0');
		pwr *= 2;
	}

	return (bnry);
}
