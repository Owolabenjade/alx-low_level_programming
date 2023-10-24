#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The set of characters to match in the prefix substring.
 *
 * Return: The number of bytes in the initial segment of 's' that consist
 * only of characters from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (!match)
		{
			return count;
		}
		s++;
	}

	return (count);
}
