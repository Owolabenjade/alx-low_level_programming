#include "main.h"
#include <stdio.h>

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
