#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_nodes - Frees the nodes of a linked list.
 * @node: The head of the linked list.
 */
void free_nodes(hash_node_t *node)
{
	if (node == NULL)
		return;

	free_nodes(node->next);
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	/* Check for NULL hash table */
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		/* Free the nodes in each linked list */
		free_nodes(ht->array[i]);
	}

	/* Free the array and the hash table structure */
	free(ht->array);
	free(ht);
}
