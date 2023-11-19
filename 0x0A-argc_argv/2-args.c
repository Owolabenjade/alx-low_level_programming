#include "main.h"
#include <stdio.h>

/**
 *print_arguments - Print all arguments received
 *@argc: The number of command-line arguments
 *@argv: An array containing the command-line arguments
*/
void print_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}

/**
 *main - Entry point of the program
 *@argc: The number of command-line arguments
 *@argv: An array containing the command-line arguments
 *
 *Return: Always 0
*/
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return (0);
}
