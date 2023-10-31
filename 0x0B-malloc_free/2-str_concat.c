/*
 * char *str_concat: Concatenates two strings and returns a newly allocated string.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Description: This function takes two strings as
 * input and concatenates them, creating a
 * new string that contains the combined contents of
 * 's1' followed by 's2'. Memory for the
 * new string is obtained using malloc.
 * If either 's1' or 's2' is NULL, they are treated as
 * empty strings. The function returns a pointer to
 * the concatenated string or NULL on failure.
 *
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL on failure.
*/
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (i = 0; i < len2; i++)
		concatenated[len1 + i] = s2[i];

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
