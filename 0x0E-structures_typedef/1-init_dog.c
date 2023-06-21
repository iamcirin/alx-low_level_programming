#include "dog.h"

/**
 * init_dog - a function that initialize struct dog
 * @d: a pointer to a struct (dog)
 * @name: name of a dog
 * @age: age of tyhe dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
