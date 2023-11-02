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
	unsigned int i;
	char *cptr;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return NULL;

	cptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		cptr[i] = 0;

	return (ptr);
}
