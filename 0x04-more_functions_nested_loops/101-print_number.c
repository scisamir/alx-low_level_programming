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

	if (test < 0)
	{
		test *= -1;
		_putchar(45);
	}

	if (test > 1000)
		_putchar((test / 1000) + '0');
	if (test > 100)
	{
		test = test % 1000;
		_putchar((test / 100) + '0');
	}
	if (test > 10)
	{
		test = test % 100;
		_putchar((test / 10) + '0');
	}
	test = test % 10;
	_putchar(test + '0');
}
