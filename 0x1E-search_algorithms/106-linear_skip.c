#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found or list is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node = list;

    if (!list)
        return NULL;

    // Use the express lane to find the block where value could be
    while (node->express != NULL && node->express->n < value) {
        printf("Value checked at index [%lu] = [%d]\n", node->express->index, node->express->n);
        node = node->express;
    }

    // Check where the express lane has ended
    printf("Value found between indexes [%lu] and [%lu]\n", node->index, node->express ? node->express->index : node->index);
    skiplist_t *end = node->express ? node->express : node;
    while (node != end->next) {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return node;
        node = node->next;
    }

    return NULL; // Value not found
}

