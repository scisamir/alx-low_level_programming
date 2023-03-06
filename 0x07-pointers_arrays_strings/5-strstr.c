#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: a pointer to the main string
 * @needle: a pointer to the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] != needle[j])
					break;

				k++;
			}

			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return (NULL);
}
