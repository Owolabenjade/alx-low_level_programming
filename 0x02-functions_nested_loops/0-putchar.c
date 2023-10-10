#include "main.h"
/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: Upon success, returns the number of bytes written, which is 1.
 *         On error, returns -1 and sets errno to indicate the error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
