#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
        /* Capitalize if it's the first character */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

        /* Check for separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
	{
            /* Capitalize the next character if it's a letter */
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i + 1] -= 32;
	}

	i++;
	}

	return (str);
}

