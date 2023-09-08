#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];

		while (curr)
		{
			free(curr->key);
			free(curr->value);

			temp = curr;
			curr = curr->next;

			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
