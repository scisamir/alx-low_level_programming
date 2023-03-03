#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a pointer to the string input
 *
 * Return: a pointer to the converted string
 */

char *cap_string(char *str)
{
	int i, j, k;
	char seps[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[i] == j)
			{
				for (k = 0; k <= 12; k++)
				{
					if (str[i - 1] == seps[k])
						str[i] = j - 32;
				}
			}
		}
	}

	return (str);
}
