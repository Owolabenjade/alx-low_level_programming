#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given position.
 *@head: A pointer to a pointer to the head of the list.
 *@idx: The index where the new node should be added. Index starts at 0.
 *@n: The data to be stored in the new node.
 *
 *Return: The address of the new node, or NULL if it failed.
 *If it is not possible to add the new node at index idx, do not add
 *the new node and return NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
