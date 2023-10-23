#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string
 * @s: Pointer to the string to search
 * @c: The character to search for
 * Return: A pointer to the first occurrence of 'c' in 's' or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	return (*s == c) ? s : NULL;
}
