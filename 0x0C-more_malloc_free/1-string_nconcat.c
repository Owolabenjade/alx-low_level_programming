#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a specified length
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 * 
 * Description:
 * This function concatenates two strings, s1 and the first 'n' bytes of s2,
 * into a newly allocated memory space. If 'n' is greater than or equal to
 * the length of s2, the entire s2 is concatenated. If 's1' or 's2' is NULL,
 * they are treated as empty strings. The returned pointer points to the
 * concatenated string, and the function returns NULL on failure.
 *
 * Return: A pointer to the newly allocated concatenated string or NULL on
 * failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = (char *)malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result[len1 + n] = '\0';

	return (result);
}
