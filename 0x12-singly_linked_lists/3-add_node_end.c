#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to the list_t list
 * @str: an element of the new node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}

	return (new);
}
