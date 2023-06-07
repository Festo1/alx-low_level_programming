#include "main.h"
#include <stdlib.h>

/**
 * array_range - It creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 * Return: A pointer to newly created array.
 * NULL if malloc fails.
 * NULL if min > max.
 */

int *array_range(int min, int max)
{
	int range, a;
	int *ptr;

	range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < range; a++)
	{
		*(ptr + a) = min + a;
	}

	return (ptr);
}
