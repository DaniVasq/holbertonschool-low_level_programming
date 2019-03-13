#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the doggos!
 *@d: pointer/struct to free
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
