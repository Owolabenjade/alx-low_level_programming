#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The string to check.
 *
 * Description:
 * This function evaluates a string to determine if
 * it represents a positive number.
 * It verifies that the string is not empty, and then iterates
 * through each character
 * in the string to ensure that they are all digits ('0' to '9').
 * If the string is empty or contains non-digit characters,
 * the function returns 0; otherwise, it returns 1 to indicate that the
 * string is a valid positive number representation.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - Entry point for the program to multiply two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	unsigned long num1 = strtoul(argv[1], NULL, 10);
	unsigned long num2 = strtoul(argv[2], NULL, 10);
	unsigned long result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
