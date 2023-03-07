#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	int test = n;
	int i = 1000000000;

	if (test == 0)
		_putchar('0');

	if (test < 0)
	{
		test *= -1;
		_putchar(45);
	}

	for (; i >= 1; i /= 10)
	{
		if (test / i != 0)
			_putchar((test / i) % 10 + '0');
	}
}
