#include "main.h"
#include <stdio.h>

int main(void)
{
	char haystack[] = "Hello, World!";
	char needle[] = "World"; /* Substring to search for */

	char *result = _strstr(haystack, needle);

	if (result != NULL)
	{
		printf("Located substring: %s\n", result);
	}
	else
	{
		printf("Substring not found in 'haystack'.\n");
	}

	return (0);
}
