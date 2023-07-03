#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list_t list to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *ptr, *nothing = NULL;

	while (head != nothing)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
