#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to a pointer to the list
 * @n: a data of the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	ptr = *head;

	new->n = n;
	new->prev = NULL;
	new->next = ptr;

	if (ptr != NULL)
		ptr->prev = new;
	*head = new;

	return (*head);
}
