#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	int n = 13; /* Example input, you can change it to any integer */
	int result = is_prime_number(n);

	if (result == 1)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is not a prime number.\n", n);
	}

	return (0);
}
