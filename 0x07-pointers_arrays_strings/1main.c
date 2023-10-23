#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program.
 *
 * Return: 0 on success.
 */
 
int main(void)
{
	char source[] = "Hello, World!";
	char destination[15];

	_memcpy(destination, source, 7);

	printf("Copied String: %s\n", destination);

	return (0);
}
