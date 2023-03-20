#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Desc: eader for struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
