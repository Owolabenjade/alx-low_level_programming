#include "function_pointers.h"
#include <stdio.h>

/**
 *  * print_name - Prints a name using a function pointer
 *   * @name: The name to print
 *    * @f: A function that prints a string
 *     */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
