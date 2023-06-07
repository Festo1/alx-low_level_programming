#include "main.h"

/**
 * _strncat - It joins two strings with n bytes but it will use at
 * most n bytes from src.
 * @dest: A string to be appended upon.
 * @src: A string to be copied from.
 * @n: The number of bytes from src to be appended to dest.
 * Return: It returns a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
	{
		dest_len++;
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[dest_len++] = src[a];
	}

	return (dest);
}
