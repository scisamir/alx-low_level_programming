#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the head of the listint_t list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *ptr = *head;
	listint_t *new;

	if (!(head) || !(*head))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = ptr;
		return (new);
	}

	while (ptr)
	{
		if (count == idx - 1)
			temp = ptr;
		ptr = ptr->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
