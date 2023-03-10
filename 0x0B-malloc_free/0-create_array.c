#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array
 * @c: the specific char
 *
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
