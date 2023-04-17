#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - To creates new dog
 * @name: The name of dog
 * @age: The age of dog
 * @owner: THe owner of dog
 * Return: A dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, ln1, ln2;
	dog_t *ndog;
	char *a, *b;

	ln1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		ln1++;
	ln2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		ln2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((ln1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < ln1; i++)
		a[i] = name[i];
	a[i] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc((ln2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < ln2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	ndog->owner = b;
	return (ndog);
}
