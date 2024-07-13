#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, sum, carry;

	for (l1 = 0; n1[l1]; l1++)
		;
	for (l2 = 0; n2[l2]; l2++)
		;

	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);

	carry = 0;
	i = l1 - 1;
	j = l2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
		sum += n1[i] - '0';
		if (j >= 0)
		sum += n2[j] - '0';

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k++;
	}

	r[k] = '\0';

	for (i = 0; i < k / 2; i++)
	{
		char temp = r[i];
		
		r[i] = r[k - 1 - i];
		r[k - 1 - i] = temp;
	}

	return (r);
}

