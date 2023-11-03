#include <stdlib.h>

/**
 *_realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Description:
 * This function reallocates a memory block previously allocated with malloc.
 * It copies the contents from the old block to the newly allocated block in
 * the range from the start of ptr up to the minimum of old_size and new_size.
 * If new_size is greater than old_size, the "added" memory is not initialized.
 * If new_size is equal to old_size, the function does nothing and returns ptr.
 * If ptr is NULL, it is equivalent to malloc(new_size). If new_size is zero
 * and ptr is not NULL, it is equivalent to free(ptr) and returns NULL.
 *
 * Return: A pointer to the newly allocated memory block,
 * or NULL on failure or in specific cases.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;

	if (new_size == old_size)
		return ptr;

	if (ptr == NULL)
		return malloc(new_size);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (new_ptr);
}
