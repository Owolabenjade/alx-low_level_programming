#include "dog.h"
#include <stdlib.h>

/**
 *  * init_dog - Initialize a struct dog
 *   * @d: Pointer to a struct dog
 *    * @name: Name of the dog
 *     * @age: Age of the dog
 *      * @owner: Name of the dog's owner
 *       */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
				{
							d->name = name;
									d->age = age;
											d->owner = owner;
												}
}
