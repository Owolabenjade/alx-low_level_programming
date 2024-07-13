#include <stdlib.h>
#include <stdio.h>

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

int main(void)
{
	char *c;

	c = malloc_checked(1024);
	printf("%d\n", 1024);  // Print the size we allocated
	free(c);
	return (0);
}
