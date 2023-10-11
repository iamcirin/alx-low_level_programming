#include "dog.h"

/**
 * init_dog - a funxtion that inializes a var with tyoe struct
 *
 * @d: pointer to a struct
 * @name: name string
 * @age: age int
 * @owner: owner dog name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}

