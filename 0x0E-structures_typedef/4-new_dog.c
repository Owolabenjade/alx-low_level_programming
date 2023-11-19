#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - Creates a new dog with copied name and owner.
 *@name: The name of the new dog.
 *@age: The age of the new dog.
 *@owner: The owner of the new dog.
 *
 *Return: A pointer to the new dog, or NULL if the function fails.
 *
 *Description: This function creates a new dog with the given name, age,
 *and owner. It allocates memory for the new dog, copies the name and owner
 *strings, and returns a pointer to the created dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
