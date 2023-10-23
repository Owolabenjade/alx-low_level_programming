
/**
 * infinite_add - Adds two positive numbers represented as strings and stores the result.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result stored in the 'r' buffer, or 0 if the result cannot fit in 'r'.
 *
 * This function takes two positive numbers as strings, adds them together, and stores the result
 * in the provided buffer 'r'. If the result cannot fit in 'r' due to size constraints, the function
 * returns 0. The function performs digit-by-digit addition, handling any carry, and ensures that
 * the result is null-terminated. The input numbers 'n1' and 'n2' are assumed to contain only digits.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = (len1 > len2) ? len1 : len2;
	int i, j, k;

	if (max_len + 1 > size_r)
		return 0;

	i = len1 - 1;
	j = len2 - 1;
	k = max_len;

	r[k + 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int sum = carry;

		// Add digits from n1 and n2
		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k--;
	}

	return (r);
}
