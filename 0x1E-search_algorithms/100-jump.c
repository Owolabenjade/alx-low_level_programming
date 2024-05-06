#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump = sqrt(size);
    size_t prev = 0;
    size_t step = jump;

    if (!array)
        return -1;

    /* Finding the block where element is present */
    while (step < size && array[step] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", step, array[step]);
        prev = step;
        step += jump;
    }

    /* Doing a linear search for value in block starting from prev */
    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
    for (size_t i = prev; i < step && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return -1;  // If element is not present in the array
}

