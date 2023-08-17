#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}

	return (nodes);
}
