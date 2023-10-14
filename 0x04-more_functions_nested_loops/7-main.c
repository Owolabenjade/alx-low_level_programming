#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the `print_diagonal` function by calling it with different arguments. The `print_diagonal` function is expected to perform a specific task related to printing diagonal lines based on the provided argument, controlling the number of slashes in each line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
