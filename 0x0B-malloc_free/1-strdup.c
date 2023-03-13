#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string input / parameter
 *
 * Return: On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 * or if the input string is null
 */

char *_strdup(char *str)
{
	int len = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	len += 1;
	new_str = malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	len = 0;

	while (str[len])
	{
		new_str[len] = str[len];
		len++;
	}
	new_str[len] = '\0';

	return (new_str);
}
