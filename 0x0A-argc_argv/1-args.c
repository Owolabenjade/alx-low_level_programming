#include "main.h"
#include <stdio.h>

/**
 *main - Entry point of the program
 *@argc: Number of arguments
 *@argv: Array of pointers to strings containing the arguments
 *
 *Return: Always 0
*/
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter warning */
	printf("%d\n", argc - 1);
	return (0);
}
