#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * linked list
 * @head: a pointer to the linked list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list or 0
 * if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
