#include "main.h"

/**
 * rot13 - Encode a string using ROT13.
 * @str: The input string to encode.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}
