#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of all multiples of
 * 3 or 5 below 1024.
 * It uses a for loop to iterate through numbers
 * and adds the multiples to the sum.
 * The final result is printed as a seven-digit number, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	_putchar('0' + (sum / 1000000 % 10));
	_putchar('0' + (sum / 100000 % 10));
	_putchar('0' + (sum / 10000 % 10));
	_putchar('0' + (sum / 1000 % 10));
	_putchar('0' + (sum / 100 % 10));
	_putchar('0' + (sum / 10 % 10));
	_putchar('0' + (sum % 10));
	_putchar('\n');

	return (0);
}
