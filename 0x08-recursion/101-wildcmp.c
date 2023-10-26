#include "main.h"

/**
 * wildcmp - Compares two strings, allowing '*' as a wildcard.
 * @s1: The first string to be compared.
 * @s2: The second string that may contain '*' as a wildcard.
 *
 * This function compares two strings, 's1' and 's2', with 
 * 's2' possibly containing
 * '*' as a wildcard character. The '*' character can match any
 * string (including an empty string). The function uses
 * recursion to perform the comparison.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /* Both strings are empty, considered identical */
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1); /* '*' at the end of s2 can match the rest of s1 */
		}
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1)); /* Use '*' as an empty string */
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)); /* Match or skip '*' */
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1)); /* Match current characters */
	}
	return (0); /* Characters don't match, not identical */
}
