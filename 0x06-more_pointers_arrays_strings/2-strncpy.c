#include "main.h"

/**
 * _strncpy - It copies the at most number of bytes from a string.
 * @dest: It stores the string copy.
 * @src: Source of the string.
 * @n: Maximum number of bytes to copied from src
 * Return: Pointer to resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, src_len = 0;

	while (src[a++])
	{
		src_len++;
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[a] = src[a];
	}

	for (a = src_len; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
