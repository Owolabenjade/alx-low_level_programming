#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}

	int j;
	for (int j = 0; j < 223 && str[i] != '\0'; j++, i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
