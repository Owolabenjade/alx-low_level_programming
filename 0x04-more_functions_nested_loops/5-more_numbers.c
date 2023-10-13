#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + num / 10);  /* Print the tens digit */
			}
		_putchar('0' + num % 10);  /* Print the ones digit */
		}
	_putchar('\n');
	}
}
