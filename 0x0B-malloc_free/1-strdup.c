#include <stdlib.h>

/*
 * _strdup - Duplicates a string and returns a pointer to the copy.
 * @str: The string to be duplicated.
 * 
 * This function takes a string as input and creates a duplicate of
 * it by allocating memory
 * using malloc. It returns a pointer to the newly duplicated string.
 * If str is NULL or memory allocation fails, it returns NULL.
 *
 * Return: On success, returns a pointer to the duplicated string.
 * Returns NULL on failure.
*/

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *duplicate;
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (unsigned int i = 0; i <= length; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
