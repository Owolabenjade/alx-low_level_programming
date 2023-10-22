#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @str: The input string to encode.
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leetReplace[] = "aAeEoOtTlL";
	char leetWith[] = "44330771";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetReplace[j] != '\0'; j++)
		{
			if (str[i] == leetReplace[j])
			{
				str[i] = leetWith[j];
				break;
			}
		}
	}

	return (str);
}
