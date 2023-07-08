#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number whose bit you want to set
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1;

	mask <<= index;
	if (mask == 0)
		return (-1);

	if (*n & mask)
	{
		mask = ~mask;
		*n &= mask;
	}

	return (1);
}
