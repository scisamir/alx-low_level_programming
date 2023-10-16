#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer to the list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list or NULL
 * if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *ptr = head;

	if ((int)index < 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);
	if (ptr->next == NULL && index == 0)
		return (ptr);

	while (ptr != NULL)
	{
		if (idx == index)
			return (ptr);
		ptr = ptr->next;
		idx++;
	}

	return (NULL);
}
