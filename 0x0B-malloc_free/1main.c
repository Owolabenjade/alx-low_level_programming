/*
 * main - Entry point for testing the _strdup function.
 *
 * This program demonstrates the usage of the _strdup function,
 * which creates a duplicate of
 * a string and returns a pointer to the copy. It tests the 
 * function with a sample string, prints the original and duplicated
 * strings, and ensures proper memory management.
 *
 * Return: 0 on success, 1 if memory allocation fails.
*/
 
#include <stdio.h>
#include "main.h"

int main(void)
{
	char *original_str = "Hello, World!";
	char *duplicated_str;

	duplicated_str = _strdup(original_str);

	if (duplicated_str == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Original string: %s\n", original_str);
	printf("Duplicated string: %s\n", duplicated_str);

	/* Remember to free the allocated memory */
	free(duplicated_str);

	return (0);
}
