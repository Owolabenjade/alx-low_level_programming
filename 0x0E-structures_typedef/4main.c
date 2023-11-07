#include <stdio.h>
#include "dog.h"

int main(void)
{
		dog_t *my_dog;

			my_dog = new_dog("Poppy", 3.5, "Bob");

				if (my_dog != NULL)
						{
									print_dog(my_dog);

											free(my_dog->name);
													free(my_dog->owner);
															free(my_dog);
																}
					else
							{
										/* Handle the case where memory allocation fails. */
										printf("Memory allocation for the dog failed.\n");
											}

						return (0);
}
