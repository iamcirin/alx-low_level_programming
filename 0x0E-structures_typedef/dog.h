#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * struct dog - a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif

