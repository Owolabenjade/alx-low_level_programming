#include "main.h" /* Include the header file */

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The string for which the length is to be calculated.
 *
 * This function takes a string 's' and recursively calculates its length
 * without using loops. It returns the length of the string as an integer.
 *
 * Return: The length of the string 's'.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}

	return 1 + _strlen_recursion(s + 1);
}
