#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Frees the memory allocated for a dog.
 *@d: A pointer to the dog to be freed.
 *
 *Description: This function frees the memory allocated for a dog,
 *including the name and owner strings. It takes a pointer to the
 *dog to be freed and releases the allocated memory.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
