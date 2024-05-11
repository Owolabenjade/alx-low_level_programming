#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/* Function prototypes for utility functions */
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/* Prototype for your jump_list function */
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /* SEARCH_ALGOS_H */

