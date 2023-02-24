#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: letter to be checked
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
