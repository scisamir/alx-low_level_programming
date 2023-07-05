#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: a pointer to the listint_t list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
