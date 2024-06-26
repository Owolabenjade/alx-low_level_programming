#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Helper function to perform binary search on a subarray
 * @array: Pointer to the first element of the array to search in
 * @left: Start index of the subarray
 * @right: End index of the subarray
 * @value: The value to search for
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t left, size_t right, int value) {
    size_t mid;
    size_t i;

    while (left <= right) {
        printf("Searching in array: ");
        for (i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i < right) printf(", ");
        }
        printf("\n");

        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return (int)mid;
        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

/**
 * exponential_search - Searches for a value in a sorted array of integers using
 * the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if not present or if array is NULL
*/

int exponential_search(int *array, size_t size, int value) {
    size_t index = 1;
    size_t high;

    if (!array || size == 0)
        return -1;

    if (array[0] == value)
        return 0;

    while (index < size && array[index] <= value) {
        printf("Value checked array[%u] = [%d]\n", (unsigned int)index, array[index]);
        index *= 2;
    }

    high = index < size ? index : size - 1;
    printf("Value found between indexes [%u] and [%u]\n", (unsigned int)(index / 2), (unsigned int)high);
    return binary_search(array, index / 2, high, value);
}
