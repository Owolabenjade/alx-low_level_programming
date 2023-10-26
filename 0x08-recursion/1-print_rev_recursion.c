#include <stdio.h>
#include "main.h" /* Include the header file */

/**
 * _putchar - Custom function to print a character
 * (Assuming you have a _putchar function;
 * you can replace this with your output function).
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
