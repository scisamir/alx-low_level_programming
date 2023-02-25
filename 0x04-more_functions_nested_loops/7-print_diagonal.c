#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ is to be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i - 1; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
