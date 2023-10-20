#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;  /* Initialize an index */

	while (separators[i] != '\0')  /* Use the index to iterate */
	{
		if (separators[i] == c)
			return 1;
		i++;  /* Increment the index */
	}
	return 0;
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the resulting string.
 */

char *cap_string(char *str)
{
	int capitalize = 1; /* Start by capitalizing the first word */

	while (*str)
	{
		if (is_separator(*str))
		{
			capitalize = 1; /* Set to capitalize the next word */
		}
		else if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str -= 'a' - 'A'; /* Capitalize the character */
			capitalize = 0;   /* The current word is already capitalized */
		}

		str++;
	}

	return str;
}
