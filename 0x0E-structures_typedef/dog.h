#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure named dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
