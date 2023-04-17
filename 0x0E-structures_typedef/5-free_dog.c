#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - A free dog
 *
 * @d: A dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
