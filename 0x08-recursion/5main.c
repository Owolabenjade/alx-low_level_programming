#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	int n = 16; /* Example, you can change it to any non-negative integer */
	int result = _sqrt_recursion(n);

	if (result == -1)
	{
		printf("Error: No natural square root for %d.\n", n);
	}
	else
	{
		printf("Square root of %d is %d\n", n, result);
	}

	return (0);
}
