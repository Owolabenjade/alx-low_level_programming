#include "lists.h"
#include <stdlib.h> /* for free */

/**
 *free_list - Frees a list_t list.
 *@head: A pointer to the head of the list.
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str); /* Free the string in the node */
		free(current);      /* Free the node itself */
	}
}
