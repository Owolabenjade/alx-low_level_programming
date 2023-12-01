#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Copies the content of a file to another file.
 *@argc: The number of arguments.
 *@argv: The array of arguments.
 *
 *Return: 0 on success, otherwise exit with the specified error codes.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (copy_file(argv[1], argv[2]) == -1)
		exit(99);

	return (0);
}
