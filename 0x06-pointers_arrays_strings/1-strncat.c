#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the string to be concatenated to
 * @src: the string to be concatenated
 * @n: the number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0, dest_len, src_len, new_len;

	while (dest[i] != '\0')
		i++;


	while (src[j] != '\0')
		j++;

	if (n > j)
		n = j;

	dest_len = i - 1;
	src_len = j;
	new_len = dest_len + n;

	while (k <= new_len + 1)
	{
		if (k > dest_len)
		{
			dest[k] = src[k - src_len + 1];

			if (k == new_len + 1)
				dest[k] = '\0';
		}
		else
			dest[k] = dest[k];

		k++;
	}

	return (dest);
}
