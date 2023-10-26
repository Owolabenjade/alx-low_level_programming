#include "main.h" /* Include the header file */

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked for primality.
 *
 * This function takes an integer 'n' and
 * recursively checks if it is a prime number.
 * If 'n' is less than or equal to 1, the function returns
 * 0 (not prime). If 'n' is 2(the only even prime number), the function returns
 * 1 (prime). For 'n' greater than 2, it checks for divisibility
 * by all odd numbers from 3 to the square root of 'n'. If 'n'
 * is divisible by any of these numbers, it returns 0. Otherwise,
 * it returns 1, indicating 'n' is a prime number.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Not prime */
	}
	else if (n == 2)
	{
		return (1); /* 2 is prime */
	}
	else
	{
		return (is_prime_recursive_helper(n, 3));
	}
}

/**
 * is_prime_recursive_helper - Recursive helper function for prime check.
 * @n: The integer to be checked for primality.
 * @divisor: The current divisor to check for divisibility.
 *
 * This recursive helper function checks if 'n' is divisible by
 * 'divisor' without any remainder. It iterates through odd divisors
 * from 3 to the square root of 'n' and returns 1 if 'n' is not divisible
 * by any of these divisors, indicating 'n' is prime.
 * Otherwise, it returns 0 if 'n' is divisible by any divisor.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_recursive_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1); /* 'n' is prime */
	}
	else if (n % divisor == 0)
	{
		return (0); /* 'n' is not prime */
	}
	else
	{
		return (is_prime_recursive_helper(n, divisor + 2));
	}
}
