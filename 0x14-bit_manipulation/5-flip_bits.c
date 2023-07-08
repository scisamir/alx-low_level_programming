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
	unsigned long int mask = 536870912; /* 100000000000000000000000000000 */
	unsigned int count = 0;

	while (mask)
	{
		if (mask & res)
			count++;
		mask >>= 1;
	}

	return (count);
}
