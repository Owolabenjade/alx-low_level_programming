/* main.c */

#include "lists.h"

int main(void)
{
	list_t head = {"Best", 4, NULL};
	list_t tail = {"School", 6, NULL};

	/* Example of linking the nodes */
	head.next = &tail;

	/* Test the print_list function */
	print_list(&head);

	return (0);
}
