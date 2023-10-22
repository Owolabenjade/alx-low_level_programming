#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
					   str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
					   str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
					   str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
					   str[i - 1] == '}'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		}
	}

	return (str);
}
