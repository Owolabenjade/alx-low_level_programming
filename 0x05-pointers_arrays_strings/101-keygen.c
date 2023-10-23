#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[101]; /* Assuming maximum password length of 100 characters */
	int i;
	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL)); /* Seed the random number generator with the current time */

	for (i = 0; i < 100; i++)
	{
		int rand_index = rand() % (sizeof(valid_chars) - 1);
		password[i] = valid_chars[rand_index];
	}

	password[i] = '\0'; /* Null-terminate the password */

	printf("%s\n", password);

	return (0);
}
