#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_node - Creates a new hash node.
 * @key: The key.
 * @value: The value.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * update_value - Updates the value associated with a key.
 * @node: The hash node to update.
 * @value: The new value.
 *
 * Return: 1 on success, 0 on failure.
 */
static int update_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value.
 * @key: The key. Key cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (update_value(current_node, value));

		current_node = current_node->next;
	}

	new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
