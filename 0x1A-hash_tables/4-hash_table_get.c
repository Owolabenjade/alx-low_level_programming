#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	/* Check for NULL hash table or empty key */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the computed index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If key is found, return the associated value */
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}

	/* Key not found */
	return (NULL);
}
