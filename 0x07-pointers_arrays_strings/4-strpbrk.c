#include "main.h"
#include <stddef.h> /* Include <stddef.h> to define NULL */

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the set of bytes to search for in 's'
 * Return: A pointer to the byte in 's' that matches one of the bytes in 'accept', or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return &s[i];
			}
		}
	}

	return (NULL); /* Return NULL when no match is found */
}
