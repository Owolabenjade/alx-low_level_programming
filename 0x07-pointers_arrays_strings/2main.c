#include "main.h"
#include <stdio.h>
#include <unistd.h> /* Include the necessary header for the write function */

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 * Return: The number of characters written
 */

int main(void)
{
	char str[] = "Hello, World!";
	char *result;

	result = _strchr(str, 'W');

	if (result != NULL)
	{
		_putchar(*result);
	}
	else
	{
		_putchar('N');  /* Character not found */
	}
	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
	return write(1, &c, 1); /* Use the 'write' system call to write the character to stdout */
}
