#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 *
 * @b: The number of bytes to allocate
 *
 * Return: a pointer be allocated or void
 */
void *malloc_checked(unsigned int b)
{

	void *ct;

	ct = malloc(b);
	if (ct == NULL)
		exit(98);

	return (ct);
}
