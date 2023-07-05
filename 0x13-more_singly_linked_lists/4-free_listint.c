#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the listint_t list to be freed
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *nothing = NULL;

	while (head != nothing)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
