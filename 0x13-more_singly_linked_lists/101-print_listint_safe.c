#include "lists.h"

/**
 *print_listint_safe - Prints a listint_t linked list with a loop.
 *@head: A pointer to the head of the list.
 *
 *Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *loop_node = NULL;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current >= current->next)
		{
			loop_node = current->next;
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			break;
		}

		current = current->next;
	}

	return (node_count);
}
