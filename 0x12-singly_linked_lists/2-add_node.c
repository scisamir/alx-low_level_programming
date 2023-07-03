#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer to the list_t list
 * @str: an element of the new node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = *head, *ptr;
	size_t len = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = temp;

	*head = ptr;

	return (*head);
}
