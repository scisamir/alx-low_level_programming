#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	new->n = n;
	new->prev = NULL;
	new->next = ptr;

	ptr->prev = new;
	*head = new;

	return (ptr);
}
