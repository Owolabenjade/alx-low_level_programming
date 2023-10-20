#include "main.h"

/**
 * infinite_add - Adds two numbers as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the result buffer
 *
 * Return: A pointer to the result, or 0 if it cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum;
	int i, j;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (size_r <= len1 || size_r <= len2)
		return (0);

	carry = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[size_r - 1] = (sum % 10) + '0';
		size_r--;
	}

	if (size_r < 0)
		return (0);

	if (size_r > 0 && r[0] == '0')
		return (r + 1);
	else
		return (r);
}
