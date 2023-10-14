#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long prime_factor, num;

	num = 612852475143;
	prime_factor = largest_prime_factor(num);

	_putchar(prime_factor + '0');
	_putchar('\n');

	return (0);
}

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 *
 * @num: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor of the given number, or -1 if none is found
 */

#include "main.h"
#include <math.h>

long largest_prime_factor(long num)
{
	long largest;

	largest = -1;
	while (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}

	for (long factor = 3; factor <= sqrt(num); factor += 2)
	{
		while (num % factor == 0)
		{
			largest = factor;
			num = num / factor;
		}
	}

	if (num > 2)
	{
		largest = num;
	}

	return (largest);
}
