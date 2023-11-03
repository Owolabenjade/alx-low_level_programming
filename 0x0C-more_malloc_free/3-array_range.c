#include <stdlib.h>

/**
 * array_range - Creates an array of integers from 'min' to 'max' (inclusive)
 * @min: The minimum value
 * @max: The maximum value
 *
 * Description:
 * This function allocates memory for an array of integers containing all values
 * from 'min' to 'max', inclusive, ordered from 'min' to 'max'. If 'min' is
 * greater than 'max', it returns 'NULL'. If 'malloc' fails to allocate memory,
 * the function also returns 'NULL'.
 *
 * Return: A pointer to the newly created array or 'NULL'
 * on failure or if 'min' > 'max'.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return NULL;

	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return NULL;

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
