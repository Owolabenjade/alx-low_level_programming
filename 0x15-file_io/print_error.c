#include "main.h"

/**
 *print_error - Prints an error message to stderr.
 *@code: The error code.
 *@file: The filename associated with the error.
*/
void print_error(int code, const char *file)
{
	switch (code)
	{
		case 97:
			dprintf(2, "Usage: %s file_from file_to\n", file);
			break;
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", file);
			break;
		case 99:
			dprintf(2, "Error: Can't write to file %s\n", file);
			break;
		default:
			break;
	}
}
