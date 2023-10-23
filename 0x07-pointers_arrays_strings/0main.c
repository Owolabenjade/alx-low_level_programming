#include "main.h"
#include <stdio.h>

int main(void)
{
	char buffer[20];
	char *result;

	result = _memset(buffer, 'A', 10);

	for (int i = 0; i < 10; i++)
	{
		_putchar(result[i]);
	}
	_putchar('\n');

	return (0);
}
