#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Define the structure for a node in the list */
typedef struct list_s
{
	char *str; /* String data in the node */
	size_t len; /* Length of the string */
	struct list_s *next; /* Pointer to the next node in the list */
} list_t;

/* Function prototype for printing the list */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);


#endif /* LISTS_H */
