#include "main.h"
#include <stdio.h>

int main(void)
{
	char source[] = "Hello, World!";
	char destination[15];

	_memcpy(destination, source, 15);

	for (int i = 0; i < 15; i++)
	{
		_putchar(destination[i]);
	}
	_putchar('\n');

	return (0);
}
