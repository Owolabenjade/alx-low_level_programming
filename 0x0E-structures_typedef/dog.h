#ifndef DOG_H
#define DOG_H

struct dog
{
		char *name;
			float age;
				char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;  /* Define dog_t as an alias for struc */
dog_t *new_dog(char *name, float age, char *owner)
void print_dog(struct dog *d);

#endif /* DOG_H */
