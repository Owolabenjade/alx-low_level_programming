/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A pointer to a function that prints a string
 *
 * This function takes a name and a function pointer
 * and uses the function pointer
 * to print the name. It checks if both the name
 * and the function pointer are not NULL
 * before calling the function pointed to
 * by 'f'. If 'name' or 'f' is NULL, the function
 *         * does nothing.
 *          */

#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
