#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to the string
 * @c: the character to be located
 *
 * Return: a pointer to the first position of the character if found
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (NULL);
}
