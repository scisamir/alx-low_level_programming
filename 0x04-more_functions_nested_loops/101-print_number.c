#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int test = n, i = 1000000000, j, k = 9, l;

	if (test < 0)
	{
		test *= -1;
		_putchar(45);
	}

	while (i > test)
	{
		i /= 10;
		j = i;
		k--;
	}

	for (l = 0; l < k; l++)
	{
		_putchar((test / j) + '0');
		test = test % j;
		j /= 10;
	}

	test = test % 10;
	_putchar(test + '0');
}
