#include "lists.h"

/**
 * delete_at_beginning - deletes a node at the beginning of a doubly linked
 * list
 * @head: a pointer to the list
 *
 * Return: Nothing
 */

int delete_at_beginning(dlistint_t **head)
{
	dlistint_t *ptr = *head;

	if (ptr != NULL)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}

		free(ptr);
		ptr = NULL;

		return (1);
	}

	return (-1);
}



/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list
 * @head: a pointer to a pointer to the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next_node, *ptr = *head;
	unsigned int pos = 1;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
		return(delete_at_beginning(head));

	while (ptr->next != NULL)
	{
		if (pos == index)
		{
			temp = ptr->next;
			next_node = temp->next;
			ptr->next = next_node;
			next_node->prev = ptr;
			free(temp);
			temp = NULL;
			return (1);
		}
		ptr = ptr->next;
		pos++;
	}

	if (pos == index && pos > 1)
	{
		ptr->next = NULL;
		ptr->prev->next = NULL;
		free(ptr);
		ptr = NULL;
		return (1);
	}

	return (-1);
}