#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *  * new_dog - Creates a new dog structure and copies the name and owner.
 *   * @name: The name of the dog.
 *    * @age: The age of the dog.
 *     * @owner: The owner of the dog.
 *      * Return: Pointer to the new dog structure, or NULL on failure.
 *       */
dog_t *new_dog(char *name, float age, char *owner)
{
		if (name == NULL || owner == NULL)
					return (NULL); /* Return NULL if name or owner is NULL */

			dog_t *new_dog_ptr;
				char *name_copy, *owner_copy;
					/* Allocate memory for the new dog structure */
					new_dog_ptr = malloc(sizeof(dog_t));

						if (new_dog_ptr == NULL)
									return (NULL); /* Return NULL if memory allocation fails */

							/* Allocate memory for name and owner copies */
							name_copy = malloc(strlen(name) + 1);
								owner_copy = malloc(strlen(owner) + 1);

									if (name_copy == NULL || owner_copy == NULL)
											{
														free(new_dog_ptr); /* Clean up if memory allocation fails */
																free(name_copy);
																		free(owner_copy);
																				return (NULL);
																					}

										/* Copy name and owner to the allocated memory */
										strcpy(name_copy, name);
											strcpy(owner_copy, owner);

												/* Initialize the new dog structure */
												new_dog_ptr->name = name_copy;
													new_dog_ptr->age = age;
														new_dog_ptr->owner = owner_copy;

															return (new_dog_ptr);
}
