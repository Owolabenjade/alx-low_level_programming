#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * This function allocates a block of memory of size 'b' bytes using the malloc
 * function. It checks if the memory allocation was successful. If malloc fails
 * to allocate the memory, the function terminates the program with an exit
 * status of 98.
 *
 * Return: A pointer to the allocated memory if successful, or terminates the
 * program if allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
