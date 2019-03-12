#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggy
 *@name: name of doggo goodboy (Django)
 *@owner: owner of doggo goodboy (Jay)
 *@age: 3.5
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
