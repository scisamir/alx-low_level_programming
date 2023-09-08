#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table to be created
 *
 * Return: a pointer to the newly created hash table
 * or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = NULL;
	unsigned long int i = 0;
	hash_node_t **array = NULL;

	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(head);
		return (NULL);
	}

	for (; i < size; i++)
		array[i] = NULL;

	 head->size = size;
	 head->array = array;

	return (head);
}
