#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the set of characters to search for in 's'
 * Return: The number of bytes in the initial segment of 's' containing only characters from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break; /* Exit inner loop when a match is found */
			}
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
	}

	return (count);
}
