#include <stdio.h>
#include "dog.h"

/**
 *  * print_dog - Print details of a struct dog
 *   * @d: Pointer to a struct dog
 *    *
 *     * This function prints the details of a struct dog,
 *      * including its name, age, and owner.
 *       * If any element of 'd' is 'NULL', it prints 
 *        * '(nil)' in place of that element.
 *         * If 'd' is 'NULL', it prints nothing.
 *          *
 *           * Example output format:
 *            * Name: Fido
 *             * Age: 3.500000
 *              * Owner: Alice
 *               */

int main(void)
{
		struct dog a_dog;
			a_dog.name = "Fido";
				a_dog.age = 3.5;
					a_dog.owner = "Alice";

						struct dog *ptr_dog = &a_dog;

							printf("Dog details:\n");
								print_dog(ptr_dog);

									return (0);
}
