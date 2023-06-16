#include "main.h"

/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated with a call to
* malloc: malloc(old_size)
* @old_size: the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes of the new memory block
*
* Return: a pointer to the new allocated memory block or the old memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size = new_size;
	char *new_ptr;
	char *old_ptr = ptr;

	if (new_size == old_size)
		return ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_ptr);

	if (new_size > old_size)
		size = old_size;

	for (i = 0; i < size; i++)
		new_ptr[i] = *(old_ptr + i);

	free(old_ptr);
	return (new_ptr);
}
