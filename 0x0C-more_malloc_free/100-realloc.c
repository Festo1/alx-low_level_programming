#include "main.h"
#include <stdlib.h>

/**
 * _realloc - It reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with a call to
 * malloc ; malloc(old_size).
 * @old_size: The old size in bytes allocated for ptr.
 * @new_size: The new_size in bytes of new memory block.
 * Return: A pointer to a new mem block, NULL or ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
	}

	if (new_size > old_size && (ptr != NULL))
	{
		np = malloc(new_size);
		if (np == NULL)
			return (np);
		for (i = 0; i < old_size; i++)
			np[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (np);
}
