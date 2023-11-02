#include <stdio.h>
#include "main.h"

int main(void)
{
	char *str;

	str = (char *)malloc_checked(10); /* Allocate 10 bytes */
	if (str == NULL)
	{
		return (1); /* Allocation failed */
	}

	strcpy(str, "Hello"); /* Copy a string into the allocated memory */
	printf("Allocated string: %s\n", str);

	free(str); /* Don't forget to free the allocated memory when done */

	return (0);
}
