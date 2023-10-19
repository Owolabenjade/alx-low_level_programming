#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting
 * with the first character.
 * @str: A pointer to a string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] != '\0') /* Check if the next character exists */
		{
			i++; /* Move to the next character */
		}
	}

	_putchar('\n');
}
