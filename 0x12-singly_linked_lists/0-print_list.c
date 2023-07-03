#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the input list_t list
 *
 * Return: the number of nodes in the input list
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}
