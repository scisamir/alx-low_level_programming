#include "main.h"

/**
 * print_triangle - prints a traingle using #
 * @size: size of triangle to be printed
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (n <= 0)
		break;

	else
	{
		for (i = 0; i < size; i++)
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
	}
	
	_putchar('\n');
}
