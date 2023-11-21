/* lists.h */

#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Define the structure for a node in the list */
typedef struct list_s
{
	char *str;
	size_t len;  /* Add the length variable */
	struct list_s *next;
} list_t;

/* Function prototype for printing the list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
