#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *  * free_dog - Frees the memory allocated for a dog structure.
 *   * @d: Pointer to the dog structure to be freed.
 *    */
void free_dog(dog_t *d)
{
		if (d != NULL)
				{
							free(d->name);   /* Free the memory for the name string */
									free(d->owner);  /* Free the memory for the owner string */
											free(d);         /* Free the memory for the dog structure */
												}
}
