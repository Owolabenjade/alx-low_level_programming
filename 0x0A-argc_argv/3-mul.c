#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *multiply - Multiply two numbers
 *@a: First number
 *@b: Second number
 *
 *Return: The result of the multiplication
*/
int multiply(int a, int b)
{
	return (a * b);
}

/**
 *main - Entry point of the program
 *@argc: The number of command-line arguments
 *@argv: An array containing the command-line arguments
 *
 *Return: 0 if successful, 1 if there are not enough arguments
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = multiply(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", result);

	return (0);
}
