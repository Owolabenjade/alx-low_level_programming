#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Helper function to print the current subarray being searched.
 * @array: Pointer to the start of the array
 * @left: Start index of the subarray
 * @right: End index of the subarray
 */
void print_array(int *array, int left, int right)
{
    int i;
    printf("Searching in array: ");
    for (i = left; i <= right; i++) {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * recursive_binary - Recursively searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the range to search within
 * @right: Right index of the range to search within
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if not found
 */
int recursive_binary(int *array, int left, int right, int value)
{
    int mid;

    if (right >= left)
    {
        print_array(array, left, right);
        mid = left + (right - left) / 2;
        if ((mid == left || value > array[mid - 1]) && array[mid] == value)
            return mid;
        if (array[mid] >= value)
            return recursive_binary(array, left, mid, value);
        else
            return recursive_binary(array, mid + 1, right, value);
    }
    return -1;
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if not present or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return -1;
    return recursive_binary(array, 0, size - 1, value);
}

