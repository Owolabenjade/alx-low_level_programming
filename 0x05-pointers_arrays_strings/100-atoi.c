#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* To track the sign of the number, 1 for positive, -1 for negative */
	int i = 0;

	if (s[0] == '-')  /* Check for leading '+' or '-' */
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9') /* Check if the character is a digit */
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break; /* If a non-digit character is encountered, stop parsing */
		}
		i++;
	}
	return result (* sign); /* Apply the sign to the result */
}
