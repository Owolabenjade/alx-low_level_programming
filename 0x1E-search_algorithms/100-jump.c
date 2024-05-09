#include "search_algos.h"
#include <stdio.h>
#include <math.h> /* for sqrt() */

/**
 * print_check - Prints the value being checked in the array.
 * @array: Pointer to the element being checked.
 * @index: Index of the element being checked.
 */
void print_check(int *array, size_t index)
{
    printf("Value checked array[%zu] = [%d]\n", index, array[index]);
}

/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t i = 0;

    if (!array)
        return -1;

    /* Jumping ahead in steps of sqrt(size) and checking if crossed or found the value */
    while (i < size && array[i] < value)
    {
        print_check(array, i);
        prev = i;
        i += step;
        if (i >= size)
            i = size - 1;
    }

    /* Checking if we have found the block where value could be or crossed the array bounds */
    printf("Value found between indexes [%zu] and [%zu]\n", prev, i);

    /* Linear search backward within the block */
    while (prev <= i)
    {
        print_check(array, prev);
        if (array[prev] == value)
            return (int)prev;
        prev++;
    }

    return -1;
}

