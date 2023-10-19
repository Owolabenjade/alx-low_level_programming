#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed
 * by a new line.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int number = a[i];
		int isNegative = (number < 0) ? 1 : 0;

		if (isNegative)
		{
			_putchar('-');
			number = -number;
		}

		int numDigits = 0;
		int temp = number;
		
		while (temp != 0)
		{
			temp /= 10;
			numDigits++;
		}

		if (isNegative)
		numDigits++;

		int padding = 26 - numDigits;

		while (padding > 0)
		{
			_putchar(' ');
			padding--;
		}

		if (isNegative)
		_putchar('-');

		while (number > 0)
		{
			int digit = number % 10;
			
			_putchar('0' + digit);
			number /= 10;
		}

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
