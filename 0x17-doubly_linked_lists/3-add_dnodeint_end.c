#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to a pointer to the list
 * @n: a data of the node to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
	}

	new->n = n;
	new->prev = current;
	new->next = NULL;

	if (current == NULL)
		*head = new;

	if (current != NULL)
		current->next = new;

	return (new);
}
