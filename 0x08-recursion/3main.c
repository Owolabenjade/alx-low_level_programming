#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	int n = 5; /* Example input, you can change it to any positive integer */
	int result = factorial(n);

	if (result == -1)
	{
		printf("Error: Factorial is not defined for negative numbers.\n");
	}
	else
	{
		printf("Factorial of %d is %d\n", n, result);
	}

	return (0);
}
