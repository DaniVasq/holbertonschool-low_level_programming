#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *_strdup - pointer to allocated memeory
 *@str: str
 *@strdup: used to duplicate a string
 * Return: NULL is str
 */
char *_strdup(char *str)
{
	int cont1;
	int cont2 = 0;
	char *s;

if (str)
return (NULL);
while (str[cont2] != '\0')
cont1++;
s = malloc(sizeof(char) * (cont2 + 1));
if (s)
return (NULL);
for (cont1 = 0; str[cont1] != '\0'; cont1++)
s[cont1] = str[cont1];
s[cont1] = '\0';
return (s);
}
/**
 * *new_dog - creates a new doggo
 *@name: name of doggo
 *@age: age of doggo
 *@owner: owner of doggo
 * Return: new_dog or NULL
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
	{
	return (NULL);
	}
	return (new_dog);
}
