#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates a new doggo
 *@name: name of doggo
 *@age: age of doggo
 *@owner: owner of doggo
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dogname = name;
	char *dogowner = owner;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = dogname;
	new_dog->owner = dogowner;
	new_dog->age = age;
	if (!new_dog)
		return (NULL);
	return (new_dog);
}
