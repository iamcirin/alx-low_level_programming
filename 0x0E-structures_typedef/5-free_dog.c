#include "dog.h"
/**
 * free_dog - a function that frees up struct pointer
 * @d: a pointer to struct to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
