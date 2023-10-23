#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: If the character is found, a pointer to the first
 *         occurrence is returned. If not found, NULL is returned.
 */
 
char *_strchr(char *s, char c)
{
	while (*s != '\0') {
		if (*s == c) {
			return s;
		}
		s++;
	}

	if (c == '\0') {
		return s;
	}

	return NULL;
}
