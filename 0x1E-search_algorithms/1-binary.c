#include "search_algos.h"
#include <stdio.h>

/**
* print_array - Helper function to print the current subarray being searched.
* @array: Pointer to the first element of the subarray.
* @left: Starting index of the subarray.
* @right: Ending index of the subarray.
*/
void print_array(const int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where value is located or
 * -1 if not found or if array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
