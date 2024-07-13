#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated space in memory containing s1 followed
 *         by the first n bytes of s2, null terminated. NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Get lengths of s1 and s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* If n >= len2, use entire string s2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for new string */
    concat = malloc(sizeof(char) * (len1 + n + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 to new string */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy n bytes of s2 to new string */
    for (j = 0; j < n; j++, i++)
        concat[i] = s2[j];

    /* Null terminate the new string */
    concat[i] = '\0';

    return (concat);
}
