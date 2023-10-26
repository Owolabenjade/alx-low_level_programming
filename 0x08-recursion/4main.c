#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	int x = 2; /* Example base */
	int y = 5; /* Example exponent */
	int result = _pow_recursion(x, y);

	if (result == -1)
	{
		printf("Error: Exponent cannot be negative.\n");
	}
	else
	{
		printf("%d^%d = %d\n", x, y, result);
	}

	return (0);
}
