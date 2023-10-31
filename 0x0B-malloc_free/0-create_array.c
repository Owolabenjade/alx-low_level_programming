#include <stdlib.h>

/*
 * create_array - Creates an array of characters and
 * initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * This function dynamically allocates memory for an
 * array of characters with a specified size
 * and initializes each element with the provided
 * character 'c'. If 'size' is 0, it returns NULL.
 *
 * Return: On success, returns a pointer to the newly
 * created array. If memory allocation fails
 * or 'size' is 0, it returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array; /* Declare the array pointer at the start of the function */
	unsigned int i; /* Declare the loop counter here */

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char)); /* Allocate memory */

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++) /* Initialize the array */
	{
		array[i] = c;
	}

	return (array);
}
