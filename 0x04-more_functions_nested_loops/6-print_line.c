#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of _ to be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		break;

	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}

	_putchar('\n');
}
