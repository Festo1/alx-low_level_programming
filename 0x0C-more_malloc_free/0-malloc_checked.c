#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - It allocates memory using malloc.
 * @b: Size of memory to be allocated.
 * Return: A pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
