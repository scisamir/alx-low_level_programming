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
	// printf("Before variable declarations");

	int i = 0, j = 0, num_count = 0;
	int sign = 1;
	char num[36];

	// printf("Just before loop for the input parameter");

	while (s[i] != '\0')
	{
		// printf("Just inside first loop");

		if (s[i] == '-' || s[i] == '+')
			sign * s[i];
		if (s[i] >= '0' && s[i] <= '9')
		{
			*(num + num_count) = s[i];
			num_count++;

			int tr;
			tr = i + 1;
			if (*(s + tr) >= '0' && *(s + tr) <= '9')
				break;
		}

		i++;
	}

	while (num[j] != '\0')
	{
		if (j == 0)
			_putchar(sign * num[j]);
		else
			_putchar(num[j]);
		j++;
	}
}
