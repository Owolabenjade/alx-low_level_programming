#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * This function demonstrates the use of the `print_buffer` function
 * to print the content of a character buffer in a specific format.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
 
int main(void)
{
	char buffer[] = "This is a test buffer for printing.\n";
	int size = sizeof(buffer) - 1; /* Exclude the null terminator */

	print_buffer(buffer, size);

	return (0);
}
