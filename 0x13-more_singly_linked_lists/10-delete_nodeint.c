#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: a pointer to a pointer to the head of the listint_t list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *del, *ptr = *head;

	if (!(*head) || !(head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (ptr)
	{
		if (count == index - 1)
			temp = ptr;
		else if (count == index)
			del = ptr;
		ptr = ptr->next;
		count++;
	}

	if (index >= count)
		return (-1);

	temp->next = del->next;
	free(del);

	return (1);
}
