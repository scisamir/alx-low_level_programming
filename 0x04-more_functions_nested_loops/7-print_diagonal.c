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
		break;

	else
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(95);
			_putchar('\n');
	}
	
	_putchar('\n');
}
