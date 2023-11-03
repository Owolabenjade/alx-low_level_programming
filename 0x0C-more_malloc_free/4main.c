#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for testing the _realloc function
 *
 * Description:
 * This program tests the _realloc function, which is designed to reallocate
 * memory using malloc and free. It allocates an initial array of integers,
 * prints the original array, and then uses _realloc to reallocate memory
 * for a larger array. It prints the new array and ensures proper memory
 * management by freeing both the old and new memory blocks to prevent memory
 * leaks.
 *
 * Return: Always returns 0.
*/
int main(void)
{
	unsigned int old_size = 5;
	unsigned int new_size = 10;
	int *arr, *new_arr;
	int i;

	arr = (int *)malloc(sizeof(int) * old_size);

	if (arr == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	printf("Original array (old_size = %u):\n", old_size);
	for (i = 0; i < old_size; i++)
	{
		arr[i] = i * 2;
		printf("%d ", arr[i]);
	}
	printf("\n");

	new_arr = (int *)_realloc(arr, sizeof(int) * old_size, sizeof(int) * new_size);

	if (new_arr == NULL)
	{
		printf("Memory reallocation failed\n");
		free(arr); /* Don't forget to free the old memory */
		return (1);
	}

	printf("New array (new_size = %u):\n", new_size);
	for (i = 0; i < new_size; i++)
	{
		printf("%d ", new_arr[i]);
	}
	printf("\n");

	free(new_arr); /* Don't forget to free the new memory */

	return (0);
}
