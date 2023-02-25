#include "main.h"

/**
 * print_triangle - prints a traingle using #
 * @size: size of triangle to be printed
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n - i; j++)
				_putchar(' ');
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
