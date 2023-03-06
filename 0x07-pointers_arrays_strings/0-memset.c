#include "main.h"

/**
 * _memset - It fills a block of memory with the specific value.
 * @s: It is the starting address.
 * @b: The constant byte to be used.
 * @n: The number of bytes to be changed.
 * Return: The new value for n bytes from the changed array.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
