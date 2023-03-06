#include "main.h"

/**
 * _strspn: gets the length of a prefix substring
 * @s: a pointer to the string to be checked
 * @accept: a pointer to the prefix substring
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
				count++;
		}
	}

	return (count);
}
