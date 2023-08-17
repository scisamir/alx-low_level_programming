#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: a pointer to the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *freer;

	while (ptr != NULL)
	{
		freer = ptr;
		ptr = ptr->next;

		free(freer);
		freer = NULL;
	}
}
