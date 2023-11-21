#include "lists.h"
#include <stdlib.h> /* for malloc, free */
#include <string.h> /* for strdup */

/**
 *create_node - Creates a new node with the given string.
 *@str: The string to be added to the new node.
 *Return: The address of the new node, or NULL if it failed.
*/
static list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	return (new_node);
}

/**
 *add_node_end - Adds a new node at the end of a list_t list.
 *@head: A pointer to a pointer to the head of the list.
 *@str: The string to be added to the new node.
 *Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (str == NULL || head == NULL)
		return (NULL);

	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
