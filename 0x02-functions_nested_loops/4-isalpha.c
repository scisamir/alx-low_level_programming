#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the letter to be checked
 *
 * Return: 1 if passed otherwise 0
 */

int _isalpha(int c)
{
	int i, j, test = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			test = 1;
	}

	for (j = 65; j <= 90; j++)
	{
		if (c == i)
			test = 1;
	}

	if (test == 1)
		return (1);

	return (0);
}
