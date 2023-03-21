#include "dog.h"
#include <stdio.h>
#include <stlib.h>

/**
 * free_dog - free
 * @d: dog
 * Desc: free
 *
 * Return: always sucess
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free (d.name);
	free (d.age);
	free (d.owner);
}
