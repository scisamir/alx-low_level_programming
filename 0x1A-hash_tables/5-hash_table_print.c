#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, sign = 0;
	hash_node_t *curr = NULL, *ptr = NULL;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		if (curr)
		{
			if (sign++ == 0)
				printf("'%s': '%s'", curr->key, curr->value);
			else
				printf(", '%s': '%s'", curr->key, curr->value);

			if (curr->next)
				ptr = curr->next;

			while (ptr)
			{
				printf(", '%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
