#include "main.h" /* Include the header file */

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * This function takes an integer 'n' and recursively
 * calculates its natural square root.
 * If 'n' does not have a natural square root
 * (i.e., it's a non-perfect square or negative),
 * the function returns -1 to indicate an error. Otherwise,
 * it recursively computes the square root using a binary
 * search approach until it finds the closest integer
 * value that is the square root of 'n'.
 *
 * Return: The natural square root of 'n', or -1 if 'n'
 * doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Negative number, no natural square root */
	}
		return (_sqrt_recursive_helper(n, 1));
}

/**
 * _sqrt_recursive_helper - Recursive helper function for
 * square root calculation.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * This recursive helper function implements a binary search
 * approach to calculate the square root of 'n'. It uses a guess that
 * starts at 1 and iteratively improves
 * the guess until it converges to the square root or a close approximation.
 *
 * Return: The square root of 'n', or -1 if 'n' doesn't
 * have a natural square root.
 */
int _sqrt_recursive_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* Square root found */
	}
	else if (guess * guess > n)
	{
		return (-1); /* No natural square root */
	}
	else
	{
		return (_sqrt_recursive_helper(n, guess + 1)); /* Recursive search */
	}
}
