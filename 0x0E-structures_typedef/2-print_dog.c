#include "dog.h"
#include <stdio.h>

/**
 *print_dog - Prints the details of a struct dog.
 *@d: A pointer to the struct dog to be printed.
 *
 *Description: This function prints the details of a struct dog,
 *including its name, age, and owner. If any element of the struct
 *is NULL, it prints "(nil)" instead.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
