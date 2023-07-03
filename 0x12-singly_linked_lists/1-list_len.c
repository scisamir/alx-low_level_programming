#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the input list_t list
 *
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}
