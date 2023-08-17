#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t current = h;

	while (current != NULL)
	{
		nodes++;
		printf("%d\n", current->n);
		current = current->next;
	}

	return (nodes);
}
