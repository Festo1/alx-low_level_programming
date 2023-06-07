#include "main.h"
#include <stdlib.h>

/**
 * _calloc - It allocates memory of an array using malloc.
 * @nmemb: The number of elements in an array.
 * @size: The size of elements of an array.
 * Return: NULL is size or nmemb == 0.
 * NULL if mallac fails.
 * A pointer to memory allocated if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
