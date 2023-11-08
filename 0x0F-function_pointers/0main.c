#include <stdio.h>
#include "function_pointers.h"

/* Example function that prints a string */
void print_string(char *str)
{
	printf("Name: %s\n", str);
}

int main(void)
{
	char *name = "John Doe";

	print_name(name, print_string);

	return (0);
}
