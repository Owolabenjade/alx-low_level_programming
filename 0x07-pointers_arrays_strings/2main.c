#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, World!";
	char character = 'o';

	char *result = _strchr(str, character);

	if (result != NULL) {
		printf("Character '%c' found at position: %ld\n", character, result - str);
	} else {
		printf("Character '%c' not found in the string.\n", character);
	}

	return (0);
}
