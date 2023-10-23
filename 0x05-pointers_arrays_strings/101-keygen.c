#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[101]; /* Assuming maximum password length of 100 characters */
	int i;

	srand(time(NULL)); /* Seed the random number generator with the current time */

	for (i = 0; i < 100; i++)
	{
		int rand_char = rand() % 94 + 33; /* Generate random printable ASCII characters */

		password[i] = (char)rand_char;
	}

	password[i] = '\0'; /* Null-terminate the password */

	printf("%s\n", password);

	return (0);
}
