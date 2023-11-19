#include "main.h"
#include <stdio.h>

/**
 *whatsmyname - Entry point of the program for Task 0
 *
 *This function prints the name of the current
 *source file without the path.
 *It extracts the file name from the __FILE__
 *macro, which includes the full
 *path to the file, and then prints only the file name.
 *The function returns 0.
 *
 *Return: Always 0
*/
int whatsmyname(void)
{
	/* Extract file name from __FILE__ */
	const char *file_name = __FILE__;
	const char *last_slash = file_name;

	/* Find the last occurrence of '/' to get the file name */
	while (*file_name != '\0')
	{
		if (*file_name == '/')
		{
			last_slash = file_name + 1;
		}
		file_name++;
	}

	printf("%s\n", last_slash);
	return (0);
}

/**
 *main - Entry point of the program for Task 1
 *@argc: The number of command-line arguments
 *@argv: An array containing the command-line arguments
 *
 *Return: Always 0
*/
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter warning */
	printf("%d\n", argc - 1);
	return (0);
}
