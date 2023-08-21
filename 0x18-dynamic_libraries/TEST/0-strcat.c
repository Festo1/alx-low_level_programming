#include "main.h"

/**
 * _strcat - It appends the src string to the dest string, overwriting the
 *  terminating null byte (\0) at the end of dest,
 *  and then adds a terminating null byte
 * @dest: A string to be appended upon.
 * @src: A string to be appended to the dest.
 * Return: It returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, a = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}


	while (src[a] != '\0')
	{
		dest[dest_len] = src[a];
		dest_len++;
		a++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
