#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key. Key cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		current_node = ht->shead;
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, key) > 0)
			{
				new_node->sprev = current_node->sprev;
				new_node->snext = current_node;

				if (current_node->sprev)
					current_node->sprev->snext = new_node;
				else
					ht->shead = new_node;

				current_node->sprev = new_node;

				break;
			}
			current_node = current_node->snext;
		}

		if (current_node == NULL)
		{
			new_node->sprev = ht->stail;
			new_node->snext = NULL;

			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	current_node = ht->shead;

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table using the sorted linked list.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	current_node = ht->shead;
	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;

		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 *                         using the sorted linked list.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	current_node = ht->stail;
	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;

		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *next_node;

	if (ht == NULL)
		return;

	current_node = ht->shead;
	while (current_node != NULL)
	{
		next_node = current_node->snext;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = next_node;
	}

	free(ht->array);
	free(ht);
}
