#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int first = 1; /* Flag to check if it's the first element to print */

	/* Check for NULL hash table */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (first)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", current_node->key, current_node->value);

			current_node = current_node->next;
		}
	}
	printf("}\n");
}
