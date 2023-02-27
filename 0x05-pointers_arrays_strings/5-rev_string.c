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
	char *temp;

	while (*(s + i) != '\0')
	{
		*(temp + i) = s[i];
		i++;
	}

	j = i - 1;
	i = 0;

	while (j >= 0)
	{
		s[j] = temp[i];
		j--;
		i++;
	}
}
