#include "main.h"

/**
 * rev_string - reverses a string
 *
 * Return: Nothing
 */

void rev_string(char *s)
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
