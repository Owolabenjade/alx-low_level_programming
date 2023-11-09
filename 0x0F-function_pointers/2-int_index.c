#include "function_pointers.h"

/**
 *  * int_index - Searches for an integer in an array
 *   * @array: The array to search
 *    * @size: The number of elements in the array
 *     * @cmp: A pointer to the comparison function
 *      *
 *       * Return: Index of the first matching element,
 *       or -1 if not found or size <= 0.
 *        */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		if (size <= 0)
			return -1;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return i;
		}
	}

	return (-1);
}
