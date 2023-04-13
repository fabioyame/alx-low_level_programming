#include "main.h"
#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: allocated memory size for ptr
 * @new_size: size of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ct;
	char *opt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ct = malloc(new_size);
	if (!ct)
		return (NULL);

	opt = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ct[i] = opt[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ct[i] = opt[i];
	}

	free(ptr);
	return (ct);
}
