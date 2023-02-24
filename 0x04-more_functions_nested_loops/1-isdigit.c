#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: input to be checked
 *
 * Return: 1 if c is a digit otherwise 0
 */

int _isupper(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}

	return(0);
}
