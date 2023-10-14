#include "main.h"
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @n: The number to find the largest prime factor for.
 * Return: The largest prime factor of the given number.
 */
long largest_prime_factor(long n)
{
	long largest_prime = -1;
	while (n % 2 == 0)
	{
		largest_prime = 2;
		n = n / 2;
	}
	for (long i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		largest_prime = n;
	}
	return largest_prime;
}
