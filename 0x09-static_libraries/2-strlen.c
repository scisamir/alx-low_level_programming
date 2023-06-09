#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string of whose length is to be returned
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
