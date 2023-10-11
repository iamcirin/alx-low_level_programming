#include "dog.h"


/**
 * _strcpy - a function that cpies a string
 * @dest: destination pointer
 * @src: source pointer
 * Return: returns a pointer to the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	for (n = 0; src[n]; n++)
		dest[n] = src[n];
	dest[n] = '\0';
	return (dest);
}

/**
 * _strlen - a function that mesures the length of a sting
 * @str: string pointer
 * Return: returns an int
 */
int _strlen(char *str)
{
	int len = 0;
	while (*str++)
		len++;
	return (len);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */ 

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (!name || age < 0 || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(_strlen(name) + 1);

	if(doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(_strlen(owner) + 1);

	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}

	doggy->name = _strcpy(doggy->name, name);
	doggy->owner= _strcpy(doggy->owner,owner);
	doggy->age = age;
	return (doggy);
}
