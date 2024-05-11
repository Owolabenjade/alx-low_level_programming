#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * print_list_part - Helper function to print the part of the list being searched
 * @start: Start node of the sub list
 * @end: End node of the sub list
 */
void print_list_part(const listint_t *start, const listint_t *end)
{
    printf("Searching in array: ");
    while (start != end)
    {
        printf("%d", start->n);
        start = start->next;
        if (start != end)
            printf(", ");
    }
    if (end)
        printf("%d\n", end->n);
    else
        printf("\n");
}

/**
 * jump_list - Searches for a value in a sorted list of integers using the Jump search algorithm.
 * @list: Pointer to the first node of the list to search in
 * @size: Number of nodes in the list
 * @value: The value to search for
 * Return: Pointer to the first node where value is located, or NULL if value is not present or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev_index = 0;
    listint_t *node = list;
    listint_t *prev = list;

    if (!list)
        return NULL;

    while (node->index < size && node->n < value)
    {
        prev = node;
        prev_index = node->index;
        for (size_t i = 0; node && i < step; i++)
            node = node->next;
        if (!node)
            node = prev; // If we overshoot, step back to the last valid node
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev_index, node->index);
    print_list_part(prev, node);

    // Binary search in the range found
    while (prev && prev->index <= node->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }
    return NULL;
}

