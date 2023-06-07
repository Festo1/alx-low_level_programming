#include <stdlib.h>

/**
 * create_array - It creates an array of chars.
 * @size: size to be allocated
 * @c: Character to initialize array.
 *
 * Return: The pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);
	arr = (char *)(malloc(size * sizeof(char)));

	if (!arr)
		return (NULL);
	while (count < size)
	{
		arr[count] = c;
		count++;
	}
	return (arr);
}
