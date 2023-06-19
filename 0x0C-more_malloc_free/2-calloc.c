#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of the data type of the array
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *callo;

	if (nmemb == 0 || size == 0)
		return (NULL);

	callo = malloc(nmemb * size);
	if (callo == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		callo[i] = 0;

	return (callo);
}
