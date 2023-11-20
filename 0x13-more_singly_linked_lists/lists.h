#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 *struct listint_s - singly linked list
 *@n: integer
 *@next: points to the next node
 *
 *Description: singly linked list node structure
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes for 0-print_listint.c and 1-listint_len.c */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /* LISTS_H */
