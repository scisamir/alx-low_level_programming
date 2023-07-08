#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the input number
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned int check = 0;

	if (n == 0)
		_putchar('0');

	for (; mask != 0; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
			check = 1;
		}

		else
		{
			if (check)
				_putchar('0');
		}
	}
}
