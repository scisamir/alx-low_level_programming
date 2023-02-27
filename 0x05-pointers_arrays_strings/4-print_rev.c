#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	int j = i - 1;

	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}

	_putchar('\n');
}