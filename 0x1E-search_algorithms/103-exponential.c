#include "search_algos.h"

int binary_search(int *array, int low, int high, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t index = 1;

    if (!array)
        return -1;

    if (array[0] == value)
        return 0;

    // Find the range for binary search by repeated doubling
    while (index < size && array[index] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        index *= 2;
    }

    // Call binary search for the found range
    int low = index / 2;
    int high = (int)(index < size ? index : size - 1);
    printf("Value found between indexes [%d] and [%d]\n", low, high);
    return binary_search(array, low, high, value);
}

/**
 * binary_search - Helps perform a binary search in a subarray from low to high.
 * @array: The entire array.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: Index of value or -1 if not found.
 */
int binary_search(int *array, int low, int high, int value)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Print the current subarray being searched
        printf("Searching in array: ");
        for (int i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

