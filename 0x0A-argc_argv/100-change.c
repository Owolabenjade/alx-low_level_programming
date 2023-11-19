#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *min_coins - Calculate the minimum number of coins needed for change
 *@cents: The amount of money in cents
 *
 *Return: The minimum number of coins
*/
int min_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		coins++;
	}

	return (coins);
}

/**
 *main - Entry point of the program
 *@argc: The number of command-line arguments
 *@argv: An array containing the command-line arguments
 *
 *Return: 0 if successful, 1 for errors
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int result = min_coins(cents);
		printf("%d\n", result);
	}

	return (0);
}
