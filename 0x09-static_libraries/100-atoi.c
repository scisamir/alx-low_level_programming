#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted string or 0 if no numbers in the string
 */

int _atoi(char *s)
{
	int i, sign = 1, indicator = 0;
	unsigned int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
			sign *= +1;
		else if (s[i] == '-')
			sign *= -1;

		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			indicator = 1;
			sum = sum * 10 + s[i] - '0';
		}
		else if (indicator)
			break;
	}

	if (sign < 0)
		sum *= -1;

	return (sum);
}
