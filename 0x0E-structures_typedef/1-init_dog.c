#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initializes a variable of type struct dog.
 *@d: A pointer to the struct dog to be initialized.
 *@name: The name of the dog as a null-terminated string.
 *@age: The age of the dog as a floating-point number.
 *@owner: The owner of the dog as a null-terminated string.
 *
 *Description: This function initializes the members of a struct dog
 *with the provided values for name, age, and owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
