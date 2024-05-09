#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos;

    if (!array)
        return -1;

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (low == high)
        {
            if (array[low] == value) 
                return low;
            break;
        }
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        
        if (pos >= size)
        {
            printf("Value checked array[%zu] is out of range\n", pos);
            return -1;
        }

        printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (int)pos;
        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

