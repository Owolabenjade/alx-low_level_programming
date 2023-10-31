/*
 * main - Entry point for testing the str_concat function.
 *
 * Description: This program demonstrates the usage of the str_concat function, which
 * concatenates two strings and returns the result as a newly allocated string. It tests
 * the function with sample strings, prints the concatenated result, and ensures proper
 * memory management.
 *
 * Return: 0 on success, 1 if memory allocation fails.
 */

#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *concatenated;

	concatenated = str_concat(s1, s2);

	if (concatenated == NULL)
	{
		printf("Concatenation failed. Memory allocation error.\n");
		return (1);
	}

	printf("Concatenated string: %s\n", concatenated);

	free(concatenated); /* Don't forget to free the allocated memory */

	return (0);
}
