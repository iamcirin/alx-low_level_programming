#include "dog.h"
#include<string.h>
#include<stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age.
 * @owner: dog owner name
 * Return: returns a pointer to a struct
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || !owner || age < 0)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}

