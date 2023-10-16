#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a pointer to the list
 * @idx: the index to insert the node at
 * @n: a data of the node to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev_node = *h;
	unsigned int pos = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (prev_node->next != NULL)
	{
		if (pos == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = prev_node;
			new->next = prev_node->next;

			prev_node->next->prev = new;
			prev_node->next = new;

			return (new);
		}
		prev_node = prev_node->next;
		pos++;
	}
	if (pos == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
