#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a pointer to the doubly linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		nodes++;
		printf("%d\n", current->n);
		current = current->next;
	}

	return (nodes);
}
