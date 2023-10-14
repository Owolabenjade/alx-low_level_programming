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
