#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (!strcmp(key, ""))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (0);

	current->key = (char *)key;
	current->value =  strdup(value);
	if (current->value == NULL)
	{
		free(current);
		return (0);
	}

	current->next = ht->array[index];
	ht->array[index] = current;

	return (1);
}
