#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number input
 * @m: second number input
 *
 * Return: the number of bits you would need to flip to get from one number
 * to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned long int mask = 1;
	unsigned int count = 0, i = 0;

	while (i < 64)
	{
		if (mask & res)
			count++;
		i++;
		mask <<= 1;
	}

	return (count);
}
