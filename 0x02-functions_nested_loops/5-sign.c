#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be tested
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
