#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - It returns a pointer to a 2D array of integers
 * @width: Row size of an array
 * @height: Column size of an array
 * Return: It returns 2D pointer array,
 * if the widith or height is 0 or negative, return NULL
 * The function will return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int a, b, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *) malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	return (ptr);
}
