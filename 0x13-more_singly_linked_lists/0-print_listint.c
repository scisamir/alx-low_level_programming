#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the input listint_t list
 *
 * Return: the number of nodes in the input list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}
