#include "main.h"

/**
 * _string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string input
 *
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int i = 0, j;

	for (; str[i] != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[i] == j)
				str[i] = j - 32;
		}
	}

	return (str);
}
