#include "search_algos.h"

void print_array(int *array, size_t left, size_t right);

/**
 * recursive_binary - Recursively searches for a value in a sorted array of integers
 *                    using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: Left index of the subarray.
 * @right: Right index of the subarray.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (right >= left)
    {
        print_array(array, left, right);
        mid = left + (right - left) / 2;

        // Check if the found value is the first occurrence.
        if ((mid == left || value > array[mid - 1]) && array[mid] == value)
            return mid;

        // If value is found but not first occurrence, or if value is still greater, recurse left.
        if (array[mid] >= value)
            return recursive_binary(array, left, mid, value);

        // If value is less than mid, recurse right.
        return recursive_binary(array, mid + 1, right, value);
    }

    return -1;  // Value not found
}

/**
 * advanced_binary - Initiates a recursive binary search to find the first occurrence
 *                   of a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return -1;

    return recursive_binary(array, 0, size - 1, value);
}

/**
 * print_array - Prints the current subarray being searched.
 * @array: The array being searched.
 * @left: The starting index of the subarray.
 * @right: The ending index of the subarray.
 */
void print_array(int *array, size_t left, size_t right)
{
    printf("Searching in array: ");
    for (size_t i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

