#include "main.h"

/**
 * _strcpy - It copies a string pointed to by the source,
 * and it also terminates a null byte (\0).
 * @dest: It is the destination of a string
 * @src: Source of the string been copied
 * Return: The copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0, y;

	while (*src)
	{
		src++;
		count++;
	}

	for (y = 0; y < count; y++)
		src--;
	for (y = 0; y < count; y++)
	{
		dest[y] = *src;
		src++;
	}
	dest[y] = *src;
	return (dest);
}
