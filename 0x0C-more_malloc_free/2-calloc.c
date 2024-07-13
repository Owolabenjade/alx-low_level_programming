#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	ptr = malloc(nmemb * size);

	/* Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero */
	for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;

	return (ptr);
}

