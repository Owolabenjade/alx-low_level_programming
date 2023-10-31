#include <stdio.h>
#include "main.h"

/*
 * main - Entry point for testing create_array function.
 *
 * This program demonstrates the usage of the create_array function,
 * which initializes an array of characters with a specific character.
 * It allocates memory for the array, initializes it, and then prints the
 * contents of the array.
 *
 * Return: 0 on success, 1 if memory allocation fails.
 */

int main(void)
{
	unsigned int size = 10; /* Size of the array */
	char character = 'X';  /* Character to initialize the array with */

	char *array = create_array(size, character); /* Create the array */
	
	if (array == NULL)
	{
		printf("Failed to create the array.\n");
		return (1); /* Memory allocation failed */
	}

	/* Print the created array */
	printf("Created array: ");

	for (unsigned int i = 0; i < size; i++)
	{
		putchar(array[i]);
	}
	printf("\n");

	free(array); /* Free the allocated memory */

	return (0); /* Program executed successfully */
}
