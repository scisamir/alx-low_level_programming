#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to the destination
 * @src: a pointer to the memory area to be copied
 * @n: number of bytes of src to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
