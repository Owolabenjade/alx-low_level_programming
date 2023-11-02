#include <stdio.h>
#include "main.h"

int main(void)
{
	unsigned int n = 5; /* Number of elements */
	unsigned int size = sizeof(int); /* Size of each element */
	int *arr;

	arr = (int *)_calloc(n, size);

	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	for (unsigned int i = 0; i < n; i++)
	{
		printf("arr[%u] = %d\n", i, arr[i]);
	}

	free(arr); /* Don't forget to free the allocated memory when done */

	return (0);
}
