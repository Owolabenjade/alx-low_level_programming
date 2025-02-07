#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located, or -1 if not found or array is NULL
**/
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = 0;

	if (array == NULL)
		return (-1);

	/* Finding the block where element is present (if it exists) */
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	/* Print message when value is found between blocks */
	printf("Value found between indexes [%lu] and [%lu]\n", prev,
			curr < size ? curr : size);

	/* Linear search in the identified block */
	while (prev <= curr && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++
	}
	return (-1);
}
