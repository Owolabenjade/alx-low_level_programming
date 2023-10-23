#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Hello, World!";
	char accept[] = "oW"; /* Bytes to search for */

	char *result = _strpbrk(str, accept);

	if (result != NULL)
	{
		printf("First occurrence in 's': %c\n", *result);
	}
	else
	{
		printf("No matching byte found in 's'.\n");
	}

	return (0);
}
