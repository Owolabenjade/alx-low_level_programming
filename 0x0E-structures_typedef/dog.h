#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Represents information about a dog.
 *@name: The name of the dog as a null-terminated string.
 *@age: The age of the dog as a floating-point number.
 *@owner: The owner of the dog as a null-terminated string.
 *
 *Description: This structure encapsulates details about a dog,
 *including its name, age, and the name of its owner. It is intended
 *to be used to organize and manage information related to dogs.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/* Typedef for struct dog. */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
