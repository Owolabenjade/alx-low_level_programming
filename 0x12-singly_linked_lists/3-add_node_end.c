#include "lists.h"
#include <stdlib.h> /* for malloc, free */
#include <string.h> /* for strdup */

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

	/* Check for invalid input */
	if (str == NULL || head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Set the length of the string */
	new_node->len = strlen(str);

	/* Set next of new node to NULL as it will be the last node */
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Find the last node in the list */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* Attach the new node at the end of the list */
	last_node->next = new_node;

	return (new_node);
}
