#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *@d: struct dog
 *@name: name of doggo
 *@owner: owner of doggo
 *@age: age of doggo
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
