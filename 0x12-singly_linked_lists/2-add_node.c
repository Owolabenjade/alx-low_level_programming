#include "lists.h"
#include <stdlib.h> /* for malloc, free */
#include <string.h> /* for strdup */

/**
 *add_node - Adds a new node at the beginning of a list_t list.
 *@head: A pointer to a pointer to the head of the list.
 *@str: The string to be added to the new node.
 *Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Update the next pointer of the new node to point to the current head */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
