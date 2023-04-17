#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: The address of dog
 * @name: The name of dog
 * @age: THe age of dog
 * @owner: The owner of dog
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
