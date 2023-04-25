#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variable type of dog
 * @d: poitnter of struct dog
 * @name: pointer of char of name
 * @age: float
 * @owner: pinter of char owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
