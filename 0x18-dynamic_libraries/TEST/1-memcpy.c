#include "main.h"

/**
 * _memcpy - The function copies n bytes from memory
 * area src to memory area dest.
 * @dest: The memory area to be stored on.
 * @src: The memory area to be copied from.
 * @n: The number of bytes.
 * Return: The copied memory with bytes changed.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
