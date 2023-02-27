#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}

	_putchar('\n');
}
