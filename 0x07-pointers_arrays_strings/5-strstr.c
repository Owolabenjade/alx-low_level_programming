#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring within a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 * Return: A pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break; /* Exit the loop when a mismatch is found */
			}
		}
		if (needle[j] == '\0')
		{
			return &haystack[i]; /* Found the substring */
		}
	}

	return (NULL); /* Substring not found */
}
