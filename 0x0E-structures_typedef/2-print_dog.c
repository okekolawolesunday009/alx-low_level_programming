#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints nill if no data
 * @d: struct
 * Desc: prints struct dog with data
 *
 * Return: success
 */

void print_dog(struct dog *d)
{

    if (d == NULL){
      return;
    }
    if (d->name == NULL){
        printf("Name: %s","nill\n");
    }
    else{
        printf("Name: %s\n", d->name);

    }
    if (d->age < 0){
        printf("Age: %s","nill\n");
    }
    else{
        printf("Age: %f\n", d->age);

    }
    if (d->owner == NULL){
        printf("Name: %s","nill\n");
    }
    else{
        printf("Name: %s\n", d->owner);

    }


}

