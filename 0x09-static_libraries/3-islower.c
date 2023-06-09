#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the letter to be checked
 *
 * Return: 1 if passed otherwise 0
 */

int _islower(int c)
{
	int i, test = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			test = 1;
	}

	if (test == 1)
		return (1);

	return (0);
}
