#include "search_algos.h"
#include <stdio.h>

/**
* interpolation_search - Searches value in sorted array using interpolation
* @array: Pointer to first element of array to search
* @size: Number of elements in array
* @value: Value to search for
*
* Return: First index where value is located, or -1 if not found/array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

				printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

				if (array[pos] == value)
						return ((int)pos);

				if (array[pos] < value)
						low = pos + 1;
				else
						high = pos - 1;
		}

		return (-1);
}
