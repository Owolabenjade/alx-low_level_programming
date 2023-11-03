#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int *arr;
	int min = 5;
	int max = 10;
	int i;

	arr = array_range(min, max);

	if (arr == NULL)
	{
		printf("Failed to create the array or min > max\n");
		return (1);
	}

	printf("Array elements from %d to %d:\n", min, max);

	for (i = 0; i <= (max - min); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr); /* Don't forget to free the allocated memory when done */

	return (0);
}
