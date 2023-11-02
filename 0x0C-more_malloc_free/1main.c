#include <stdio.h>
#include "main.h"

int main(void)
{
	char *concatenated;

	char *s1 = "Hello, ";
	char *s2 = "world!";
	unsigned int n = 7;

	concatenated = string_nconcat(s1, s2, n);

	if (concatenated == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Concatenated string: %s\n", concatenated);

	/* Don't forget to free the allocated memory when done */
	free(concatenated);

	return (0);
}
