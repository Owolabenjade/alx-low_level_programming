#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes to zero
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 * 
 * Description:
 * This function allocates memory for an array of 'nmemb' elements, each of
 * 'size' bytes, and initializes the memory to zero. If 'nmemb' or 'size' is
 * zero, the function returns 'NULL'. If 'malloc' fails to allocate memory,
 * the function also returns 'NULL'.
 *
 * Return: A pointer to the newly allocated and initialized memory or 'NULL' on
 * failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
