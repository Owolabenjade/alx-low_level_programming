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

	return largest;
}
