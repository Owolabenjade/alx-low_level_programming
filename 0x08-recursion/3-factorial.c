#include "main.h" /* Include the header file */

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is to be calculated.
 *
 * This function takes an integer 'n' and recursively calculates its factorial.
 * If 'n' is less than 0, the function returns -1 to indicate an error.
 * If 'n' is 0, the function returns 1, as the factorial of 0 is defined as 1.
 * For positive integers, the function recursively calculates the factorial
 * by multiplying 'n' with the factorial of 'n-1' until 'n' becomes 1.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Factorial is not defined for negative numbers */
	}
	else if (n == 0)
	{
		return (1);  /* Base case: Factorial of 0 is 1 */
	}
	else
	{
		return (n * factorial(n - 1)); /* Recursive case */
	}
}
