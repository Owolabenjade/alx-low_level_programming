#include "main.h" /* Include the header file */

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * This function takes two integers 'x' (base) and 'y' (exponent)
 * and recursively calculates the value of 'x' raised to the power
 * of 'y'. If 'y' is less than 0, the function returns -1 to indicate
 * an error. Otherwise, it recursively computes
 * the result by multiplying 'x' with itself 'y-1' times until 'y' becomes 0.
 *
 * Return: The value of 'x' raised to the power of 'y',
 * or -1 if 'y' is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Error: Exponent is negative */
	}
	else if (y == 0)
	{
		return (1);  /* Base case: x^0 is 1 */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* Recursive case */
	}
}
