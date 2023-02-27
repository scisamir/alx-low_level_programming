#include "main.h"

/**
 * puts_half - prints second half of a string, followed by a new line
 * @str: the input string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0, j, half_len;

	while (*(str + i) != '\0')
	{
		i++;
	}

	i++;

	if (i % 2 != 0)
		half_len = (i - 1) / 2;
	else
		half_len = i / 2;

	for (j = half_len; j <= i; j++)
	{
		_putchar(*(str + j));
	}

	_putchar('\n');
}
