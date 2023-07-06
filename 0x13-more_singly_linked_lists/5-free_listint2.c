#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to a pointer to the head of the listint_t list to be freed
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
