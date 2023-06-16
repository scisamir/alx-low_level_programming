#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: number of bytes of s2
 *
 * Return: a newly allocated space in memory, which contains s1, followed
 * by the first n bytes of s2, and null terminated or returns NULL
 * if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, i, j, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;
	len += s1len;

	while (s2[s2len])
		s2len++;
	if (n >= s2len)
		n = s2len;
	len += n + 1;

	str = malloc((len) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (i == len)
			str[i] = '\0';
		else if (i < s1len)
		{
			str[i] = s1[i];
			if (i + 1 == s1len)
				j = 0;
		}
		else
			str[i] = s2[j++];
	}

	return (str);
}
