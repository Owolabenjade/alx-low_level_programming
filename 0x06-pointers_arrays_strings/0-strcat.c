#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    /* Find the length of dest string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append src to dest */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Add terminating null byte */
    dest[dest_len + i] = '\0';

    /* Return pointer to dest */
    return dest;
}

