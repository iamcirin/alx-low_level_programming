#include "dog.h"
#include<stdlib.h>

/**
 * free_dog - a function that free a struct pointer
 * @d: a pointer struct
 * @dog_t: a struct
 */

void free_dog(dog_t, *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
