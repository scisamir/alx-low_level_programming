#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 *
 * Return: a pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated or returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, i2, j = 0, k = 0, len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j + 1;
	i2 = i;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	i = 0, j = 0;

	while (k < (len - 1))
	{
		if (k >= i2)
		{
			str[k] = s2[j];
			j++;
		} else if (k < i2)
		{
			str[k] = s1[i];
			i++;
		}
		k++;
	}

	while (k < len)
	{
		str[k] = '\0';
		k++;
	}
	return (str);
}
