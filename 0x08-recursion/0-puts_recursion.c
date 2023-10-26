#include <stdio.h>
#include "main.h" /* Include the header file */

/**
 * puts_recursion.c
 *
 * This source file contains the implementation of the _puts_recursion function.
 * It includes the main header file to access the 
 * function prototype for _puts_recursion.
 * The _puts_recursion function recursively prints
 * a string followed by a newline, without using loops.
 */
 
void _puts_recursion(char *s)
{
	if (*s == '\0') {
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
