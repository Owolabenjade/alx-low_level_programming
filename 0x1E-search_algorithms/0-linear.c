#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located,
 * -1 if value is not present or if array is NULL
*/

int linear_search(int *array, size_t size, int value)

{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n",
				(unsigned int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
